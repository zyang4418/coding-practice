// 拉格朗日中值定理
#include<stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    double c = (a + b) / 2.0;
    printf("%.1f\n", c);

    return 0;
}

// 推算钟点
#include <stdio.h>

int main(void)
{
    int h, m;
    long long add;
    scanf("%d:%d %lld", &h, &m, &add);
    long long future = h * 60 + m + add;
    printf("%02d:%02d", (future / 60) % 24, future % 60);

    return 0;
}

// 海伦公式
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, p;
    scanf("a=%lf,b=%lf,c=%lf", &a, &b, &c);
    p = (a + b + c) / 2;
    printf("S=%.4f", sqrt(p * (p - a) * (p - b) * (p - c)));

    return 0;
}

// 整数四则运算
#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d", a, b, a / b);

    return 0;
}

// 将一个大写英文字母转换为小写输出
#include <stdio.h>

int main(void)
{
    char letter;
    scanf("%c", &letter);
    letter = letter + 32;
    printf("%c", letter);

    return 0;
}

// 交换两个变量的值并输出
#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("a=%d,b=%d", a, b);

    return 0;
}

// 分苹果
#include <stdio.h>

int main(void)
{
    int n, p, q;
    scanf("%d", &n);
    p = n / 4;
    q = n % 4;
    printf("%d,%d", p, q);

    return 0;
}

// 分时计价
#include <stdio.h>
#include <math.h>

int main() {
    float year, time, money_per_hour, money;
    scanf("%f %f", &year, &time);
    if (year >= 5) {
        money_per_hour = 50;
    } else {
        money_per_hour = 30;
    }

    if (time <= 40) {
        money = time * money_per_hour;
    } else {
        money = 40 * money_per_hour + (time - 40) * 1.5 * money_per_hour;
    }
    printf("%.2f\n", money);
    return 0;
}

// 计算矩形内各部分形状的面积
#include <stdio.h>

int main() {
    double len, high, x, y, z;
    scanf("%lf %lf %lf %lf %lf", &len, &high, &x, &y, &z);

    double abef, ecgh, dfhg;
    abef = (x + y) * high / 2;
    printf("Area of ABEF is %.3lf\n", abef);
    ecgh = (len - x) * high / 4 + ( (y - x) / 2 + len - y) * z / 2;
    printf("Area of ECGH is %.3lf\n", ecgh);
    dfhg = (high - z) * ( (y - x) / 2 + len - y) / 2 + (len - y) * high / 4;
    printf("Area of DFHG is %.3lf\n", dfhg);

    return 0;
}

// 谁能进图书馆
#include <stdio.h>
#include <math.h>

int main() {
    int ban_age_line, company_age_line, age_1, age_2;
    scanf("%d %d %d %d", &ban_age_line, &company_age_line, &age_1, &age_2);
    if (age_1 >= ban_age_line && age_2 >= ban_age_line) {
        printf("%d-Y %d-Y\n", age_1, age_2);
        printf("huan ying ru guan");
    } else if (age_1 >= company_age_line) {
        printf("%d-Y %d-Y\n", age_1, age_2);
        printf("qing 1 zhao gu hao 2");
    } else if (age_2 >= company_age_line) {
        printf("%d-Y %d-Y\n", age_1, age_2);
        printf("qing 2 zhao gu hao 1");
    } else if (age_1 >= ban_age_line) {
        printf("%d-Y %d-N\n", age_1, age_2);
        printf("1: huan ying ru guan");
    } else if (age_2 >= ban_age_line) {
        printf("%d-N %d-Y\n", age_1, age_2);
        printf("2: huan ying ru guan");
    } else {
        printf("%d-N %d-N\n", age_1, age_2);
        printf("zhang da zai lai ba");
    }

    return 0;
}

// 计算天数
#include <stdio.h>

int main() {
    int year, month, day;
    scanf("%d/%d/%d", &year, &month, &day);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        switch (month) {
            case 1: printf("%d", day); break;
            case 2: printf("%d", 31 + day); break;
            case 3: printf("%d", 60 + day); break;
            case 4: printf("%d", 91 + day); break;
            case 5: printf("%d", 121 + day); break;
            case 6: printf("%d", 152 + day); break;
            case 7: printf("%d", 182 + day); break;
            case 8: printf("%d", 213 + day); break;
            case 9: printf("%d", 244 + day); break;
            case 10: printf("%d", 274 + day); break;
            case 11: printf("%d", 305 + day); break;
            case 12: printf("%d", 335 + day); break;
        }
    } else {
        switch (month) {
            case 1: printf("%d", day); break;
            case 2: printf("%d", 31 + day); break;
            case 3: printf("%d", 59 + day); break;
            case 4: printf("%d", 90 + day); break;
            case 5: printf("%d", 120 + day); break;
            case 6: printf("%d", 151 + day); break;
            case 7: printf("%d", 181 + day); break;
            case 8: printf("%d", 212 + day); break;
            case 9: printf("%d", 243 + day); break;
            case 10: printf("%d", 273 + day); break;
            case 11: printf("%d", 304 + day); break;
            case 12: printf("%d", 334 + day); break;
        }
    }
    return 0;
}

// 日K蜡烛图
#include <stdio.h>

int main() {
    double open, high, low, close;
    scanf("%lf %lf %lf %lf", &open, &high, &low, &close);

    if (close < open) {
        printf("BW-Solid");
    } else if (close > open) {
        printf("R-Hollow");
    } else if (close == open) {
        printf("R-Cross");
    }

    if (low < open && low < close && high > open && high > close) {
        printf(" with Lower Shadow and Upper Shadow");
    }
    else if (low < open && low < close) {
        printf(" with Lower Shadow");
    } else if (high > open && high > close) {
        printf(" with Upper Shadow");
    }

    return 0;
}

// 高速公路超速处罚
#include <stdio.h>
#include <math.h>

int main(void)
{
    int speed, limit;
    double percent;
    scanf("%d%d", &speed, &limit);

    if (speed * 100 / limit < 110)
    {
        printf("OK");
    }
    else if (speed * 100 / limit < 150)
    {
        printf("Exceed %.0f%%. Ticket 200", speed * 100.0 / limit  - 100);
    }
    else
    {
        percent = speed * 100.0 / limit - 100;
        printf("Exceed %.0f%%. License Revoked", percent);
    }

    return 0;
}

// 求一元二次方程的根
#include <stdio.h>
#include <math.h>

int main() {
    long double a, b, c;
    long double delta, x1, x2, realPart, imagPart;

    scanf("%Lf %Lf %Lf", &a, &b, &c);

    if (a == 0 && b == 0 && c == 0) {
        printf("Zero Equation");
        return 0;
    }
    if (a == 0 && b == 0) {
        printf("Not An Equation");
        return 0;
    }

    if (a == 0) {
        x1 = -c / b;
        if (fabsl(x1) < 1e-9)
            x1 = 0;
        printf("%.2Lf", x1);
        return 0;
    }

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        if (fabsl(x1) < 1e-9)
            x1 = 0;
        if (fabsl(x2) < 1e-9)
            x2 = 0;
        if (x1 > x2) {
            printf("%.2Lf\n%.2Lf", x1, x2);
        } else {
            printf("%.2Lf\n%.2Lf", x2, x1);
        }
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        if (fabsl(x1) < 1e-9)
            x1 = 0;
        printf("%.2Lf", x1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-delta) / (2 * a);
        if (fabsl(realPart) < 1e-9)
            realPart = 0;
        printf("%.2Lf+%.2Lfi\n%.2Lf-%.2Lfi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

// 12-24小时制
#include <stdio.h>

int main(void)
{
    int hour, minute;
    scanf("%d:%d", &hour, &minute);
    if (hour < 12)
    {
        printf("%d:%d AM", hour, minute);
    }
    else if (hour == 12)
    {
        printf("%d:%d PM", hour, minute);
    }
    else if (hour == 24)
    {
        printf("00:%d AM", minute);
    }
    else
    {
        printf("%d:%d PM", hour - 12, minute);
    }

    return 0;
}

// 判断闰年
#include <stdio.h>

int main(void)
{
    int year;
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year %400 == 0))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}

// 分段计算居民水费[2]
#include <stdio.h>

int main() {
    double usage, bill;
    scanf("%lf", &usage);
    if (usage <= 0.00) {
        bill = 0.00;
    } else if (usage <= 15.00) {
        bill = usage * 4 / 3;
    }else if (usage >= 15.00) {
        bill = usage * 2.5 - 10.5;
    }

    printf("f(%.2lf) = %.2lf\n", usage, bill);

    return 0;
}

// 邮资计算
#include <stdio.h>

int main() {
    int weight, bill;
    char urgent;
    scanf("%d %c",&weight, &urgent);

    if ( weight <= 1000 ) {
        bill = 8;
    } else {
        bill = 8;
        bill += (weight - 1000) / 500 * 4;
        if (weight % 500 != 0) {
            bill += 4;
        }
    }

    if ( urgent == 121 ) {
        bill += 5;
    }

    printf("%d\n", bill);
    return 0;
}

// 简单四则运算
#include <stdio.h>

int main() {
    double a, b,result;
    char operator;
    scanf("%lf %c %lf", &a, &operator, &b);
    if (operator == '+') {
        result = a + b;
        printf("%.2lf\n", result);
    } else if (operator == '-') {
        result = a - b;
        printf("%.2lf\n", result);
    } else if (operator == '*') {
        result = a * b;
        printf("%.2lf\n", result);
    } else if (operator == '/' && b != 0) {
        result = a / b;
        printf("%.2lf\n", result);
    } else {
        printf("The divisor is 0.");
    }
    return 0;
}

// 从键盘上输入数字星期，然后输出它对应的的英文。
#include <stdio.h>

int main() {
    int day;
    scanf("%d", &day);
    if (day == 1) {
        printf("Monday");
    } else if (day == 2) {
        printf("Tuesday");
    } else if (day == 3) {
        printf("Wednesday");
    } else if (day == 4) {
        printf("Thursday");
    } else if (day == 5) {
        printf("Friday");
    } else if (day == 6) {
        printf("Saturday");
    } else if (day == 7) {
        printf("Sunday");
    } else {
        printf("-1");
    }
    return 0;
}

// switch与二进制位运算
#include <stdio.h>

int main() {
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    switch (op) {
        case '&':
            printf("%d %c %d = %d", a, op, b, a & b);
        break;
        case '|':
            printf("%d %c %d = %d", a, op, b, a | b);
        break;
        case '^':
            printf("%d %c %d = %d", a, op, b, a ^ b);
        break;
        default:
            printf("ERROR");
    }

    return 0;
}

// 输入年份和月份
#include <stdio.h>

int main() {
    int year, month, leap_year;
    scanf("%d %d",&year, &month);

    //Judge leap year
    if ((year % 4 == 0 && year % 100 != 0) || year %400 == 0)
    {
        leap_year = 1;
    }
    else {
        leap_year = 0;
    }

    if (month == 2) {
        if (leap_year) {
            printf("29");
        } else {
            printf("28");
        }
    } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("31");
    } else {
        printf("30");
    }

    return 0;
}

// 空心菱形
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int height;
    cin >> height;
    if (height % 2 == 0) {
        cout << "Error";
        return 0;
    }
    for (int i = height / 2; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }
        cout << "*";
        for (int k = i + 3; k <= (height - i); k++) {
            cout << " ";
        }
        if (i != height / 2) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= height / 2; i++) {
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }
        cout << "*";
        for (int k = i + 3; k <= (height - i); k++) {
            cout << " ";
        }
        if (i != height / 2) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// 字符梯形
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int T, m, n;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        // Print T group(s)
        cin >> m >> n;
        for (int j = m; j <= n; j++) {
            // Print m to n line(s)
            for (int k = 1; k <= j; k++) {
                // Print k character(s)
                cout << j;
            }
            cout << endl;
        }
    }

    return 0;
}

// 金币
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned long long int n;
    unsigned long long int active_days = 0;
    unsigned long long int sum = 0;
    cin >> n;
    if (n == 0) {
        cout << 0;
        return 0;
    }
    for (unsigned long long int i = 1; i <= n; i++) {
        for (unsigned long long int j = 1; j <= i; j++) {
            sum += i;
            active_days += 1;
            if (active_days == n) {
                cout << sum;
                return 0;
            }
        }
    }

    return 0;
}

// 土地分割
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long m, n;
    cin >> m >> n;

    while (n != 0) {
        long long temp = m % n;
        m = n;
        n = temp;
    }

    cout << m;

    return 0;
}

// 求阶乘序列前N项和
#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;
    int ret = 1;
    cin >> num;
    for (int i = 1; i <= num; i++) {
        ret *= i;
        sum += ret;
    }
    cout << sum;

    return 0;
}

// 奇偶分家
#include <iostream>

int main()
{
    using namespace std;
    int arr[1000] = {0};
    int n, odd = 0, even = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] % 2 == 0)
        {
            even++;
        } else
        {
            odd++;
        }
    }

    cout << odd << " " << even;

    return 0;
}

// 统计素数并求和
#include <cmath>
#include <iostream>

int main() {
    using namespace std;
    int m, n;
    int number = 0, sum = 0;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        int flag = 1;
        if (i < 2) {
            flag = 0;
        } else {
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag) {
            sum += i;
            number++;
        }
    }
    cout << number << " " << sum;
    return 0;
}

// 高空坠球
#include <iostream>
#include <iomanip>

int main() {
    using namespace std;
    long int h, n;
    double total_distance, rebound_height;
    cin >> h >> n;
    if (n == 0) {
        cout << "0.0 0.0";
    } else {
        total_distance = (double) h;
        rebound_height = h / 2.0;

        for (int i = 1; i < n; i++) {
            total_distance += rebound_height * 2;
            rebound_height /= 2.0;
        }
        cout << setiosflags(ios::fixed) << setprecision(1) << total_distance << " " << setiosflags(ios::fixed) <<
                setprecision(1) << rebound_height;
    }
    return 0;
}

// 最大公约数和最小公倍数
#include<stdio.h>
int main(){
    int m,n,c,b,y,a,d;
    scanf("%d %d",&m,&n);
    a=m;
    d=n;
    y=a%d;
    while(y!=0){
        b=d;
        y=b%c;
        c=y;
    }
    printf("%d %d",c,m*n/c);
    return 0;
}

// 兔子繁衍问题
#include <iostream>
#include <iomanip>

int main() {
    using namespace std;
    int N; // N是题目给定的兔子总数，不超过10000的正整数
    int month = 2;
    cin >> N;
    if (N == 1)
    {
        cout << 1;
        return 0;
    }
    long long int last_month_new = 1, this_month_new = 1, sum;
    while (this_month_new < N)
    {
        sum = last_month_new + this_month_new;
        last_month_new = this_month_new;
        this_month_new = sum;
        month++;
    }
    cout << month;
    return 0;
}

// 求整数的位数及各位数字之和
#include <iostream>
#include <iomanip>

int main() {
    using namespace std;
    int N; // N是题目给定的正整数
    cin >> N;
    int count = 0, sum = 0;
    while (N > 0) {
        sum += N % 10;
        N /= 10;
        count++;
    }
    //这道题用string好像也可以？
    cout << count << " " << sum;
    return 0;
}

// 求幂级数展开的部分和
#include <iostream>
#include <iomanip>

int main() {
    using namespace std;
    double x; // 题目给定的实数x，[0,5]
    double term = 1.0, sum = 1.0;
    int k = 1;

    cin >> x;

    while (term >= 0.00001)
    {
        term *= x / k;
        sum += term;
        k++;
    }

    cout << setiosflags(ios::fixed) << setprecision(4) << sum;

    return 0;
}

// 打印九九口诀表
#include <iostream>
#include <iomanip>

int main() {
    using namespace std;
    int X; // 题目给定的正整数X，[1,9]
    cin >> X;

    for (int i = 1; i <= X; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%-4d", j, i, i*j);
        }
        printf("\n");
    }

    return 0;
}

// 换硬币
#include <iostream>
#include <iomanip>

int main() {
    using namespace std;
    int x; // The amount of change given by the problem, [8,100]
    cin >> x;
    int count = 0;
    int max_fen5 = (x - 3) / 5; // There must be at least one fen1 and fen2
    for (int a = max_fen5; a >= 1; a--) {
        int max_fen2 = (x - a * 5 - 1) / 2; // There must be at least one fen1
        for (int b = max_fen2; b >= 1; b--) {
            int c = x - a * 5 - b * 2;
            if (c >= 1) {
                // Some cases of no fen1 should be ignored
                int total = a + b + c;
                printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", a, b, c, total);
                count++;
            }
        }
    }

    printf("count = %d", count);
    return 0;
}

// 多个整数的逆序输出-递归
#include <stdio.h>

void F(int n);

int main()
{
    int n;
    scanf("%d", &n);
    F(n);
    return 0;
}

void F(int n) {
    if (n <= 0) {
        return;
    }
    int num;
    scanf("%d", &num);
    F(n-1);
    printf("%d ", num);
}

// 寻找自守数
#include <stdio.h>

int IsAutomorphic(int x);
void FindAutomorphic(int lower, int upper);

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    FindAutomorphic(a, b);
    return 0;
}

int total = 0;
int IsAutomorphic1(int x) {
    if (x == 0) {
        printf("0\n");
        total++;
        return 0;
    } else if (x == 1) {
        printf("1\n");
        total++;
        return 0;
    }
    int x2 = x * x;
    int temp;
    int divisor = 1;
    for (int i = x2; i > 0; i /= divisor) {
        divisor *= 10;
        temp = x2 % divisor;
        if (temp == x) {
            printf("%d\n", temp);
            total++;
        }
    }
    return 0;
}

void FindAutomorphic(int lower, int upper) {
    for (int i = lower; i <= upper; i++) {
        IsAutomorphic1(i);
    }
    if (total == 0) {
        printf("None");
    }
}

// 统计各位数字之和是5的数
#include <stdio.h>

int is( int number );
void count_sum( int a, int b );

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    if (is(a)) printf("%d is counted.\n", a);
    if (is(b)) printf("%d is counted.\n", b);
    count_sum(a, b);

    return 0;
}

int is(int number)
{
    int sum = 0;
    int temp = number;
    while (temp>0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    if (sum == 5)
    {
        return 1;
    }
    return 0;
}

void count_sum(int a, int b)
{
    int count = 0, sum = 0;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++)
    {
        if (is(i))
        {
            count++;
            sum += i;
        }
    }
    printf("count = %d, sum = %d", count, sum);
}

// 全局变量和静态变量
#include <stdio.h>

int max = 0, min = 9999999, total = 0;
int fun(void);

int main()
{
    int n;
    n=fun();
    n=fun();
    n=fun();
    printf("max=%d min=%d total=%d ave=%.1f", max, min, total, (float)total/n);
}

int fun (void)
{
    int num;
    int count = 0;
    static int sum = 0;
    while (1)
    {
        scanf("%d", &num);
        if (num<0)
        {
            break;
        }
        count++;
        total += num;
        if (num > max) max = num;
        if (num < min) min = num;
    }
    sum += count;
    return sum;
}

// 符号函数
#include <stdio.h>

int sign(int x);

int main()
{
    int x;

    scanf("%d", &x);
    printf("sign(%d) = %d\n", x, sign(x));

    return 0;
}

int sign( int x )
{
    if(x>0)
    {
        return 1;
    }
    else if(0 == x)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

// 进制转换
#include <stdio.h>

void Fun(int x,int p);

int main(){
    int x;scanf("%d",&x);
    Fun(x,16);putchar('\n');
    Fun(x,10);putchar('\n');
    Fun(x,8);putchar('\n');
    Fun(x,2);putchar('\n');
    return 0;
}

void Fun(int x, int p)
{
    if (x >= p)
    {
        Fun(x / p, p);
    }
    int num = x % p;
    if (num < 10)
        putchar('0' + num);
    else
        putchar('A' + (num - 10));
}

// 递归法求Fibonacci数列第n项的值
#include <stdio.h>

int fun(int n);

int main()
{
    int i;
    for (i = 1; i <= 20; i++)
    {
        printf("%6d", fun(i));
        if (i % 5 == 0) printf("\n");
    }
    return 0;
}

int fun(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fun(n - 1) + fun(n - 2);
    }
}

// 字符金字塔
#include <stdio.h>

void CharPyramid(int n, char ch);

int main()
{
    int n;
    char ch;

    scanf("%d %c", &n, &ch);
    CharPyramid(n, ch);

    return 0;
}

void CharPyramid(int n, char ch) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = i; j >= 1; j--) {
            printf("%c ", ch);
        }
        printf("\n");
    }
}

// 输出指定范围内的自守数
#include <stdio.h>

int IsAutomorphic(int x);
void FindAutomorphic(int lower, int upper);

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    FindAutomorphic(a, b);
    return 0;
}

int total = 0;
int IsAutomorphic(int x) {
    if (x == 0) {
        printf("0\n");
        total++;
        return 0;
    } else if (x == 1) {
        printf("1\n");
        total++;
        return 0;
    }
    int x2 = x * x;
    int temp;
    int divisor = 1;
    for (int i = x2; i > 0; i /= divisor) {
        divisor *= 10;
        temp = x2 % divisor;
        if (temp == x) {
            printf("%d\n", temp);
            total++;
        }
    }
    return 0;
}

void FindAutomorphic(int lower, int upper) {
    for (int i = lower; i <= upper; i++) {
        IsAutomorphic(i);
    }
    if (total == 0) {
        printf("None");
    }
}

// 近似求PI
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double eps;
    cin >> eps;
    double sum = 1.0, up = 1.0, down = 1.0;
    int i = 1;
    if (eps < 1) {
        // cout << "2.00000";

        while (1) {
            up *= i;
            down *= 2 * i + 1;
            double term = up / down;
            sum += term;
            if (term < eps) {
                break;
            }
            i++;
        }
    }
    double pi = sum * 2;
    printf("PI = %.5f\n", pi);
    return 0;
}

// 判断素数
#include<stdio.h>
int main(){
    int N,a;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&a);
        if(a<=1)
            printf("No\n");
        for(int n=2;n<=a;n++){
            if(a%n==0&&n!=a){
                printf("No\n");
                break;
            }
            else if(a%n==0&&n==a)
                printf("Yes\n");
        }
    }
    return 0;
}

// *电文环形解密
#include <stdio.h>
int main()
{
    int key;
    scanf("%d", &key);
    getchar();
    int shift = (-key) % 26;
    if (shift < 0)
    {
        shift += 26;
    }
    char c;
    while ((c = getchar()) != EOF && c != '\n')
    {
        if (c >= 'A' && c <= 'Z')
        {
            c = (c - 'A' + shift) % 26 + 'A';
        }
        else if (c >= 'a' && c <= 'z')
        {
            c = (c - 'a' + shift) % 26 + 'a';
        }
        putchar(c);
    }
    putchar('\n');
    return 0;
}

// 小熊冒险乐园
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
using namespace std;

void english();
int sisterOrBrother();
void choosePath();
void eatHoney();
void baLaBaLa();
void dynamicLightWave();
void gameOver();

void chinese();
int sisterOrBrotherChi();
void choosePathChi();
void eatHoneyChi();
void baLaBaLaChi();
void dynamicLightWaveChi();
void gameOverChi();

int main() {
    mciSendString("open ./music.wma alias music", NULL, 0, NULL);
    mciSendString("play music repeat", NULL, 0, NULL);
    cout << "Supported Languages:" << endl;
    cout << "[1] English" << endl;
    cout << "[2] Chinese" << endl;
    int choice;
    cout << "Please select the language you want to use: ";
    while (1) {
        cin >> choice;
        if (choice == 1) {
            english();
        } else if (choice == 2) {
            chinese();
        } else {
            cout << "Please select a valid option. " << endl;
            cout << "Please try again: ";
        }
    }
}

void english() {
    system("cls");
    int protagonist = sisterOrBrother();
    choosePath();
    eatHoney();
    if (protagonist == 0) {
        baLaBaLa();
    } else if (protagonist == 1) {
        dynamicLightWave();
    }
    gameOver();
}

void chinese() {
    system("cls");
    int protagonist = sisterOrBrotherChi();
    choosePathChi();
    eatHoneyChi();
    if (protagonist == 0) {
        baLaBaLaChi();
    } else if (protagonist == 1) {
        dynamicLightWaveChi();
    }
    gameOverChi();
}

int sisterOrBrother() {
    cout << "You are a little bear who has come to Adventure land." << endl;
    system("sleep 1");
    cout << "After you enter the gate, ";
    system("sleep 1");
    cout << "you see a fog ";
    system("sleep 1");
    cout << "and a mysterious voice:" << endl;
    system("sleep 1");
    string str;
    cout << "Hello, are you a little sister or a little brother? [S/b] ";
    while (1) {
        cin >> str;
        if (str == "S" || str == "s" || str == "SISTER" || str == "Sister" || str == "sister") {
            return 0;
        }
        if (str == "B" || str == "b" || str == "BROTHER" || str == "Brother" || str == "brother") {
            return 1;
        }
        cout << "ERROR: Please type 'S' or 'B' to choose the main character." << endl;
        cout << "Please try again: ";
    }
}

void choosePath() {
    cout << "The mist clears, there are two roads ahead: " << endl;
    system("sleep 1");
    cout << "the left leads to the water, " << endl;
    system("sleep 1");
    cout << "the right leads to the land." << endl;
    system("sleep 1");
    string str;
    cout << "May I ask where you want to go? [L/r] ";
    while (1) {
        cin >> str;
        if (str == "L" || str == "l" || str == "LEFT" || str == "Left" || str == "left") {
            cout << "Little bear cannot swim. DROWNED" << endl;
            system("sleep 1");
            gameOver();
        } else if (str == "R" || str == "r" || str == "RIGHT" || str == "Right" || str == "right") {
            return;
        }
        cout << "ERROR: Please type 'L' or 'R' to choose the path." << endl;
        cout << "Please try again: ";
    }
}

void eatHoney() {
    cout << "Walk along the land, " << endl;
    system("sleep 1");
    cout << "there is a big tree ";
    system("sleep 1");
    cout << "with a beehive on it. " << endl;
    system("sleep 1");
    string str;
    cout << "Do you want to eat honey? [Y/n] ";
    while (1) {
        cin >> str;
        if (str == "Y" || str == "y" || str == "YES" || str == "Yes" || str == "yes") {
            cout << "You are being attacked by bees! " << endl;
            system("sleep 3");
            return;
        }
        if (str == "N" || str == "n" || str == "NO" || str == "No" || str == "no") {
            cout << "The little bear was too weak to move on. WASTED" << endl;
            system("sleep 1");
            gameOver();
        }
        cout << "ERROR: Please type 'Y' or 'N' to decide whether or not to eat honey." << endl;
        cout << "Please try again: ";
    }
}

void baLaBaLa() {
    cout << "Little Bear inadvertently activates Bala Bala energy, " << endl;
    system("sleep 1");
    cout << "dancing solves the problem and makes friends with the bee. " << endl;
    system("sleep 1");
    cout << "Happy ending!" << endl;
}

void dynamicLightWave() {
    cout << "Little Bear inadvertently activates the dynamic light wave, " << endl;
    system("sleep 1");
    cout << "destroys the beehive, " << endl;
    system("sleep 1");
    cout << "obtains the invincible dragon slayer suit, " << endl;
    system("sleep 1");
    cout << "and has been invincible in the adventure park ever since. " << endl;
    system("sleep 1");
    cout << "Happy ending!" << endl;
}

void gameOver() {
    cout << "Game over. Press enter to play again... ";
    getchar();
    getchar();
    system("cls");
    english();
}

int sisterOrBrotherChi() {
    cout << "你是一只小熊，来到了冒险乐园。" << endl;
    system("sleep 1");
    cout << "进入大门后，";
    system("sleep 1");
    cout << "看见一片迷雾，";
    system("sleep 1");
    cout << "一个神秘的声音响起：" << endl;
    system("sleep 1");
    string str;
    cout << "你好，请问你是小姐姐还是小哥哥? [S/b] ";
    while (1) {
        cin >> str;
        if (str == "S" || str == "s" || str == "SISTER" || str == "Sister" || str == "sister") {
            return 0;
        }
        if (str == "B" || str == "b" || str == "BROTHER" || str == "Brother" || str == "brother") {
            return 1;
        }
        cout << "错误: 键入 'S' 或 'B' 以选择主角。" << endl;
        cout << "请重试: ";
    }
}

void choosePathChi() {
    cout << "迷雾散去，前面有两条路：" << endl;
    system("sleep 1");
    cout << "左边通往水域，" << endl;
    system("sleep 1");
    cout << "右边通往陆地，" << endl;
    system("sleep 1");
    string str;
    cout << "请问你想去哪里？[L/r] ";
    while (1) {
        cin >> str;
        if (str == "L" || str == "l" || str == "LEFT" || str == "Left" || str == "left") {
            cout << "小熊不会游泳。溺水。" << endl;
            system("sleep 1");
            gameOverChi();
        } else if (str == "R" || str == "r" || str == "RIGHT" || str == "Right" || str == "right") {
            return;
        }
        cout << "错误: 键入 'L' 或 'R' 以选择道路。" << endl;
        cout << "请重试: ";
    }
}

void eatHoneyChi() {
    cout << "顺着陆地走，";
    system("sleep 1");
    cout << "有一颗大树，";
    system("sleep 1");
    cout << "上面有蜂巢。" << endl;
    system("sleep 1");
    string str;
    cout << "你想去吃蜂蜜么？[Y/n] ";
    while (1) {
        cin >> str;
        if (str == "Y" || str == "y" || str == "YES" || str == "Yes" || str == "yes") {
            cout << "你被蜜蜂围攻了！" << endl;
            system("sleep 3");
            return;
        }
        if (str == "N" || str == "n" || str == "NO" || str == "No" || str == "no") {
            cout << "小熊由于过度虚弱无法继续前进。" << endl;
            system("sleep 1");
            gameOverChi();
        }
        cout << "错误: 键入 'Y' 或 'N' 以决定是否吃蜂蜜。" << endl;
        cout << "请重试: ";
    }
}

void baLaBaLaChi() {
    cout << "小熊无意中激活巴拉巴拉能量，";
    system("sleep 1");
    cout << "跳舞解决了问题。" << endl;
    system("sleep 1");
    cout << "Happy ending!" << endl;
}

void dynamicLightWaveChi() {
    cout << "小熊无意中激活了动感光波，";
    system("sleep 1");
    cout << "击毁了蜂巢，";
    system("sleep 1");
    cout << "获得了无敌屠龙套装，" << endl;
    system("sleep 1");
    cout << "从此在冒险乐园中所向披靡。" << endl;
    system("sleep 1");
    cout << "Happy ending!" << endl;
}

void gameOverChi() {
    cout << "游戏结束。按下回车键再玩一局... ";
    getchar();
    getchar();
    system("cls");
    chinese();
}

// 数组元素循环右移问题
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    M = M % N;
    for (int i = N - M; i < N; i++)
    {
        printf("%d", arr[i]);
        if (i < N - 1)
            printf(" ");
    }
    for (int i = 0; i < N - M; i++)
    {
        if (i == 0 && M > 0)
            printf(" ");
        printf("%d", arr[i]);
        if (i < N - M - 1)
            printf(" ");
    }
    return 0;
}

// 找出不是两个数组共有的元素
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> arr1, arr2;
    unordered_set<int> set1, set2;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr1.push_back(num);
        set1.insert(num);
    }

    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr2.push_back(num);
        set2.insert(num);
    }

    vector<int> result;
    unordered_set<int> outputSet;

    for (int num : arr1) {
        if (set2.find(num) == set2.end() && outputSet.find(num) == outputSet.end()) {
            result.push_back(num);
            outputSet.insert(num);
        }
    }

    for (int num : arr2) {
        if (set1.find(num) == set1.end() && outputSet.find(num) == outputSet.end()) {
            result.push_back(num);
            outputSet.insert(num);
        }
    }

    for (size_t i = 0; i < result.size(); i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << result[i];
    }

    cout << endl;
    return 0;
}

// 组个最小数
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int arr[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int first_digit;
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            first_digit = i;
            arr[i]--;
            break;
        }
    }
    printf("%d", first_digit);
    for (int i = 0; i < 10; i++)
    {
        while (arr[i] > 0)
        {
            cout << i;
            arr[i]--;
        }
    }

    return 0;
}

// 矩阵运算
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j == n - 1 || j == n - 1 || i == n - 1) == 0)
            {
                sum += matrix[i][j];
            }
        }
    }

    cout << sum;
    return 0;
}

// 找鞍点
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        int line_max = matrix[i][0];
        for (int j = 0; j < n; j++)
        {
            if (line_max < matrix[i][j])
            {
                line_max = matrix[i][j];
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == line_max)
            {
                int flag = 1;

                for (int k = 0; k < n; k++)
                {
                    if (matrix[k][j] < line_max)
                    {
                        flag = 0;
                        break;
                    }
                }

                if (flag)
                {
                    printf("%d %d\n", i, j);
                    found = 1;
                    return 0;
                }
            }
        }
    }
    if (!found)
    {
        cout << "NONE";
    }

    return 0;
}

// 螺旋方阵
#include <iostream>
#include <iomanip>
using namespace std;
int arr[15][15];

int main() {
    int x, y, n, total;
    cin >> n;
    x = 1, y = 1;
    arr[x][y] = 1, total = 1;
    while (total < n * n)
    {
        while (y + 1 <= n && arr[x][y + 1] == 0)
        {
            arr[x][++y] = ++total;
        }
        while (x + 1 <= n && arr[x + 1][y] == 0)
        {
            arr[++x][y] = ++total;
        }
        while (y - 1 >= 1 && arr[x][y - 1] == 0)
        {
            arr[x][--y] = ++total;
        }
        while (x - 1 >= 1 && arr[x - 1][y] == 0)
        {
            arr[--x][y] = ++total;
        }
    }

    for (x = 1; x <= n; x++)
    {
        for (y = 1; y <= n; y++)
        {
            printf("%3d", arr[x][y]);
        }
        cout << endl;
    }

    return 0;
}

// 求集合数据的均方差
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;
    double sum = 0, sum_sq = 0;
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        sum += x;
        sum_sq += x * x;
    }
    double avg = sum / N;
    double variance = sum_sq / N - avg * avg;
    double stddev = sqrt(variance);
    cout << fixed << setprecision(5) << stddev << endl;
    return 0;
}

// Pair Up for the Autumn Outing
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> students(n);

    for (int i = 0; i < n; i++) {
        cin >> students[i];
    }

    for (int i = 0; i < n / 2; i++) {
        cout << students[i] << " " << students[n - 1 - i] << endl;
    }

    return 0;
}

// 摘苹果
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int height;
    cin >> height;
    height += 30;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (height >= v[i]) {
            sum += 1;
        }
    }

    cout << sum << endl;

    return 0;
}

// 组合数的和
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> digits(n);
    for (int i = 0; i < n; ++i) {
        cin >> digits[i];
    }

    int total = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                total += digits[i] * 10 + digits[j];
            }
        }
    }

    cout << total << endl;
    return 0;
}

// 比较两个字符串大小
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string str1;
    string str2;
    cin >> str1 >> str2;
    if (str1 > str2) {
        cout << ">";
    } else if (str1 < str2) {
        cout << "<";
    } else if (str1 == str2) {
        cout << "=";
    }

    return 0;
}

// 删除重复字符
#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    set<char> seen;
    string unique_chars;
    for (char c : input) {
        if (seen.find(c) == seen.end()) {
            unique_chars += c;
            seen.insert(c);
        }
    }

    sort(unique_chars.begin(), unique_chars.end());

    cout << unique_chars << endl;

    return 0;
}

// 6翻了
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int i = 0;
    while (i < s.length()) {
        if (s.at(i) != '6') {
            cout << s.at(i);
            i++;
        } else {
            int count = 0;
            while (i < s.length() && s.at(i) == '6') {
                count++;
                i++;
            }
            if (count > 9) {
                cout << "27";
            } else if (count > 3) {
                cout << "9";
            } else {
                for (int j = 0; j < count; j++) {
                    cout << '6';
                }
            }
        }
    }
    return 0;
}

// 约瑟夫环问题，13人成环，第7人出列
 #include <iostream>
 #include <vector>
 using namespace std;

 int main() {
     int n = 13;
     vector<int> people {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

     while (n != 1) {
         if (n >= 7) {
             auto it = people.begin();
             advance(it, 6);
             people.erase(it);
             n--;
         } else {
             int temp = 7 % n - 1;
             auto it = people.begin();
             advance(it, temp);
             people.erase(it);
             n--;
         }
     }
     cout << people.at(0) << endl;

     return 0;
 }

// 找密码
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
    // 获取最后一行字符串（密码字符来源）
    char *last_line = s[4];
    // 存储前四行每个对应位置的字符出现总次数
    int counts[4] = {0};

    // 遍历前四行字符串（每个对应密码的一个数字）
    for (int i = 0; i < 4; i++) {
        // 当前要检测的目标行（第i行）
        char *current_line = s[i];
        int sum = 0; // 存储当前行的累计出现次数

        // 遍历最后一行中的每个字符
        for (int j = 0; last_line[j] != '\0'; j++) {
            char c = last_line[j]; // 当前要统计的字符
            int cnt = 0; // 当前字符在目标行的出现次数

            // 在目标行中统计该字符的出现次数
            for (int k = 0; current_line[k] != '\0'; k++) {
                if (current_line[k] == c) {
                    cnt++;
                }
            }

            sum += cnt; // 将当前字符的统计结果累加到总次数
        }

        counts[i] = sum; // 记录第i行对应的密码数字
    }

    // 将四个统计结果组合成4位数密码
    // 第一位*1000 + 第二位*100 + 第三位*10 + 第四位
    return counts[0] * 1000 + counts[1] * 100 + counts[2] * 10 + counts[3];
}

// 输出特定范围内符合条件的数
#include <cstdio>

void fun(int *Num, int begin, int end, int digi,int *Count);
void printNum(int *Num,int Count);

int main()
{
    int numCount,m,n, diginum, num[1000],i;

    scanf("%d,%d", &m, &n);
    scanf("%d",&diginum);

    fun(num, m, n, diginum,&numCount) ;
    printNum(num,numCount);

    return 0;
}

void fun(int *Num, int begin, int end, int digi, int *Count) {
    *Count = 0;
    if (digi == 0) { // 处理digi为0的情况，直接返回
        return;
    }
    for (int i = begin; i <= end; i++) {
        if (i % digi != 0) { // 检查是否能被digi整除
            continue;
        }
        int temp = i;
        int cnt = 0;
        while (temp != 0) { // 分解各位并统计digi出现的次数
            int d = temp % 10;
            if (d == digi) {
                cnt++;
            }
            temp /= 10;
        }
        if (cnt >= 2) { // 满足条件则存入数组
            Num[*Count] = i;
            (*Count)++;
        }
    }
}

void printNum(int *Num, int Count) {
    if (Count == 0) {
        printf("No number!");
        return;
    }
    for (int i = 0; i < Count; i++) {
        printf("%d", Num[i]);
        if (i != Count - 1) {
            printf(" ");
        }
    }
}

// 玩转函数指针
#include <stdio.h>

void isFactorOf(int x, int y){
    if(x % y) printf("%d is not a factor of %d.\n", y, x);
    else printf("%d is a factor of %d.\n", y, x);
}

void proceed(int *a, int *b, int size, void (*fp)(int x, int y));

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for(int i=0; i<n; i++) scanf("%d", a+i);
    for(int i=0; i<n; i++) scanf("%d", b+i);
    proceed(a, b, n, isFactorOf);
    return 0;
}

void proceed(int *a, int *b, int size, void (*fp)(int x, int y)) {
    for (int i = 0; i < size; i++) {
        fp(a[i], b[i]);
    }
}

// 数组里最大的数和最小的数
#include <stdio.h>
#include <stdlib.h>

void MinArray (int a[], int n, int *p, int *q);

int main(){

    int N, *a = NULL, i;
    int da, xiao;

    scanf("%d", &N);

    a = (int*)malloc(sizeof(int) * N);

    for(i = 0 ; i < N; i++){
        scanf("%d", &a[i]);
    }

    MinArray ( a, N, &da, &xiao );

    printf("max = %d, min = %d", da, xiao);

    return 0;

}

void MinArray(int a[], int n, int *p, int *q) {
    // 初始化最大值和最小值为数组的第一个元素
    *p = a[0];
    *q = a[0];

    // 遍历数组，比较并更新最大值和最小值
    for (int i = 1; i < n; i++) {
        if (a[i] > *p) {
            *p = a[i];  // 更新最大值
        }
        if (a[i] < *q) {
            *q = a[i];  // 更新最小值
        }
    }
}

// 计算两数的和与差
#include <stdio.h>

void sum_diff( float op1, float op2, float *psum, float *pdiff );

int main()
{
    float a, b, sum, diff;

    scanf("%f %f", &a, &b);
    sum_diff(a, b, &sum, &diff);
    printf("The sum is %.2f\nThe diff is %.2f\n", sum, diff);

    return 0;
}

void sum_diff(float op1, float op2, float *psum, float *pdiff) {
    *psum = op1 + op2;
    *pdiff = op1 - op2;
}

// 拆分实数的整数与小数部分
#include <stdio.h>

void splitfloat( float x, int *intpart, float *fracpart );

int main()
{
    float x, fracpart;
    int intpart;

    scanf("%f", &x);
    splitfloat(x, &intpart, &fracpart);
    printf("The integer part is %d\n", intpart);
    printf("The fractional part is %g\n", fracpart);

    return 0;
}

void splitfloat(float x, int *intpart, float *fracpart) {
    *intpart = (int)x;
    *fracpart = x - *intpart;
}

// 将整数中每一位上为偶数的数依次取出构成新数
#include <stdio.h>

void fun (long s, long *t);

int main()
{ long s, t;
    scanf("%ld", &s);
    fun(s, &t);
    printf("The result is: %ld\n", t);
    return 0;
}

void fun(long s, long *t) {
    long temp = 0;
    while (s > 0) {
        long digit = s % 10;
        if (digit % 2 == 0) {
            temp = temp * 10 + digit;
        }
        s /= 10;
    }
    // 反转新数以恢复正确的顺序
    long result = 0;
    while (temp > 0) {
        result = result * 10 + temp % 10;
        temp /= 10;
    }
    *t = result;
}

// 输入年份和天数，输出对应的年、月、日
# include <stdio.h>

void month_day (int year, int yearday, int * pmonth, int * pday);

int main ()
{
    int day, month, year, yearday; /*  定义代表日、月、年和天数的变量*/
    scanf ("%d%d", &year, &yearday );
    month_day (year, yearday, &month, &day );/* 调用计算月、日函数  */
    printf ("%d %d %d\n", year, month, day );
    return 0;
}

void month_day ( int year, int yearday, int * pmonth, int * pday) {
    int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, sum = 0;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        days_in_month[2] = 29;
    }

    for (i = 1; i <= 12; i++) {
        sum += days_in_month[i];
        if (sum >= yearday) {
            break;
        }
    }

    *pmonth = i;
    *pday = yearday - (sum - days_in_month[i]);
}

// 求两个形参的乘积和商
#include <stdio.h>

void fun(double a, double b, double *x, double *y);

int main () {
    double a, b, c, d;
    scanf ("%lf%lf", &a, &b );
    fun ( a , b, &c, &d ) ;
    printf ("c=%.2f  d=%.2f\n", c, d );
    return 0;
}

void fun(double a, double b, double *x, double *y) {
    *x = a * b;
    *y = a / b;
}

// 计算两个复数之积
#include <stdio.h>

struct complex{
    int real;
    int imag;
};

struct complex multiply(struct complex x, struct complex y);

int main()
{
    struct complex product, x, y;

    scanf("%d%d%d%d", &x.real, &x.imag, &y.real, &y.imag);
    product = multiply(x, y);
    printf("(%d+%di) * (%d+%di) = %d + %di\n",
            x.real, x.imag, y.real, y.imag, product.real, product.imag);

    return 0;
}

struct complex multiply (struct complex x, struct complex y) {
    struct complex product;
    product.real = x.real * y.real - x.imag * y.imag;
    product.imag = x.real * y.imag + x.imag * y.real;

    return product;
}

// 查找书籍
#include <iostream>
#include <iomanip>
#include <string>
#include <memory>

using namespace std;

int main() {
    int n;
    cin >> n;

    unique_ptr<string[]> books = make_unique<string[]>(n);
    unique_ptr<double[]> prices = make_unique<double[]>(n);

    for (int i = 0; i < n; i++) {
        cin.ignore(); // 忽略换行符
        getline(cin, books[i]);
        cin >> prices[i];
    }

    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (prices[i] > prices[maxIndex]) {
            maxIndex = i;
        }
        if (prices[i] < prices[minIndex]) {
            minIndex = i;
        }
    }

    cout << fixed << setprecision(2);
    cout << prices[maxIndex] << ", " << books[maxIndex] << endl;
    cout << prices[minIndex] << ", " << books[minIndex] << endl;

    return 0;
}