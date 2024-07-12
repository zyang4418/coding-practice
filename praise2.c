//程序清单 4.3
//如果编译器不能识别 %zd，尝试换成 %u 或 %lu。
#include <stdio.h>
#include <string.h> 
//提供 strlen() 函数的原型
//如果使用 ANSI C 以前的编译器，必须移除这一行
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];

	printf("What's your name? ");
	scanf_s("%s", name, sizeof(name)); 
	//在这里需要 sizeof(name)，否则发生异常
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n",
		strlen(name), sizeof name);
	printf("The phrase of praise has %zd letters ",
		strlen(PRAISE));
	printf("and occupies %zd memory cells.\n", sizeof PRAISE);

	return 0;
}