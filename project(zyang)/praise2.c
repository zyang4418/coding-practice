//程序清单 4.3
//如果编译器不识别 %zd，尝试换成 %u 或 %lu。
#include <stdio.h>
#include <string.h> //提供 strlen() 函数的原型
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];

	printf("What's your name? ");
	scanf_s("%s", name, sizeof(name));
	printf("Hello, %s. %s\n", name, PRAISE);

	printf("Your name of %zd letters occupies %zd memory cells.\n"),
		strlen(name), sizeof(name);
	//第一种方法处理长 printf() 语句

	printf("The pharse of praise has %zd letters ",
		strlen(PRAISE));
	printf("and occupies %zd memory cells.\n", sizeof(PRAISE));
	//第二种方法处理长 printf() 语句
	//这里的 sizeof(PRAISE) 也可以写为 sizeof PRAISE

	return 0;
}

//该程序仍存在问题，无法识别 name 的字母数。