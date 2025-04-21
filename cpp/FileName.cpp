#include "hiredis/hiredis.h"

int main() {
    redisContext *c = redisConnect("127.0.0.1", 6379);
    if (c == NULL || c->err) {
        if (c) {
            printf("错误：%s\n", c->errstr);
            // 处理错误
        } else {
            printf("无法分配 redis 上下文\n");
        }
    }
    return 0;
}