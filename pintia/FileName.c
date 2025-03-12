#include<stdio.h>

int main() {

	int a, b;

	for(a=1,b=1; a<=10; a++) {

		if(b>=10) break;

		if(b%3==1) {

			b+=3;

			continue;

		}

	}

	printf("%d",a);

}