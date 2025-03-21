#include <cstdio>
#include <cmath>

int IsTheNumber ( const int N ) {
    char string[100] = N;
    int temp = 0;
    int number[10] = {0,1,2,3,4,5,6,7,8,9};
    if
    if (sqrt(N) == N * N && temp) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int n1, n2, i, cnt;

    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}