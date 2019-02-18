#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
void HideCursor()
{
	CONSOLE_CURSOR_INFO cursor_info={1,0};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info);
}
int main()
{
	HideCursor();
	int x=5,y=10;
	char input;
	while(1)
	{
		system("cls");
		
		for(int i=0;i<x;i++)
		{
			printf("\n");
		}
		
		for(int j=0;j<y;j++)
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
		
		if(kbhit())
		{
			input=getch();
			if(input=='a')
			{
				y--;
			}
			if(input=='d')
			{
				y++;
			}
			if(input=='w')
			{
				x--;
			}
			if(input=='s')
			{
				x++;
			}
		}
	}
    return 0;
}
