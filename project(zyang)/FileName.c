#include <stdio.h>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
int main(void)
{
	mciSendString("open ./bgm.wma alias music", NULL, 0, NULL);
	mciSendString("play music", NULL, 0, NULL);
	mciSendString("play music repeat", NULL, 0, NULL);
	system("pause");

	return 0;
}