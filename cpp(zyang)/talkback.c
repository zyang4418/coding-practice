//程序清单 4.1 演示与用户交互
//经过修改，这个程序在 Visual Studio 2022 中可以正常运行
#include <stdio.h>
#include <string.h> //提供 strlen() 函数的原型
#define DENSITY 62.4 //人体密度（单位：磅/立方英尺）
int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40]; //name 是一个可容纳 40 个字符的数组
	
	printf("Hi! What's your first name?\n");
	scanf_s("%s", name, sizeof(name)); 
	//在此处添加了 sizeof(name) 后程序可正常运行
	printf("%s, what's your weight in pounds?\n", name);
	scanf_s("%f", &weight);
	//在此处不能添加 sizeof(weight)，若添加则警告传递的参数过多
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
	printf("Also, your first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n", size);

	return 0;
}