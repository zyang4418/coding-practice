#include <cstdio>
#include <cstdlib>
#define N 100
#define M 5 // 五行字符串

int decode(char **s); // **s是指向五行字符串指针的指针

int main() {
    char *s[M]; // 指向五行字符串的指针
    int i; // 累加器
    int key; // 密码
    for (i = 0; i < M; i++) {
        s[i] = (char *) malloc((N + 1) * sizeof(char)); // 存储字符的数组
        gets(s[i]); // 将字符串读取到字符数组
    }
    // s为指向字符数组首元类型的地址，*s为指向字符数组类型的地址，**s为指向指针类型的地址（其指针为字符数组首元地址）
    key = decode(s); // 解密码
    printf("%04d", key); // 输出密码
    for (i = 0; i < M; i++) {
        free(s[i]); // 释放内存
    }

    return 0;
}

int decode(char **s) {
    char *last_line = s[4];
    int counts[4] = {0};

    for (int i = 0; i < 4; i++) {
        char *current_line = s[i];
        int sum = 0;
        for (int j = 0; last_line[j] != '\0'; j++) {
            char c = last_line[j];
            int cnt = 0;
            for (int k = 0; current_line[k] != '\0'; k++) {
                if (current_line[k] == c) {
                    cnt++;
                }
            }
            sum += cnt;
        }
        counts[i] = sum;
    }

    return counts[0] * 1000 + counts[1] * 100 + counts[2] * 10 + counts[3];
}
