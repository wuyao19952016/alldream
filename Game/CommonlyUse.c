/***************游戏中常用的函数*******************
*1. 光标隐藏 HideCursor() 
*
*
*****************************************************/
#include<windows.h>
void HideCursor()
{
	CONSOLE_CURSOR_INFO cursor_info={1,0};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info);
}
