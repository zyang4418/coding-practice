#include <stdio.h>

int main(void)
{
	int a, b;
    scanf("%d %d", &a, &b);
    double c = (a + b) / 2.0;
    printf("%.1f\n", c);
	
    return 0;
}