//�����嵥 4.1 ��ʾ���û�����
//�����޸ģ���������� Visual Studio 2022 �п�����������
#include <stdio.h>
#include <string.h> //�ṩ strlen() ������ԭ��
#define DENSITY 62.4 //�����ܶȣ���λ����/����Ӣ�ߣ�
int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40]; //name ��һ�������� 40 ���ַ�������
	
	printf("Hi! What's your first name?\n");
	scanf_s("%s", name, sizeof(name)); 
	//�ڴ˴������ sizeof(name) ��������������
	printf("%s, what's your weight in pounds?\n", name);
	scanf_s("%f", &weight);
	//�ڴ˴�������� sizeof(weight)��������򾯸洫�ݵĲ�������
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
	printf("Also, your first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n", size);

	return 0;
}