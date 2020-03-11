#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
/*全局变量 */
int post_x,post_y;		//飞机位置
int high,width;			//游戏画面尺寸
int bullet_x,bullet_y;	//子弹坐标
int enemy_x,enemy_y;	//敌人坐标
int score=0;			//得分

void HideCursor();
void startup();
void show();
void updateWithoutInput();
void updateWithInput();
void gotoxy(int x,int y);

int main()
{
	srand(time(0));
	HideCursor();
	startup();
	while(1)
	{
		show();
		updateWithoutInput();
		updateWithInput();
	}

    return 0;
}

void startup()
{
	high=20;
	width=30;

	post_x=high/2;
	post_y=width/2;

	bullet_x=0;
	bullet_y=post_y;

	enemy_x=1;
	enemy_y=post_y;
}

void HideCursor()
{
	CONSOLE_CURSOR_INFO cursor_info={1,0};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info);
}

void show()
{
	gotoxy(0,0);
	for(int i=1;i<=high;i++)
	{
		for(int j=1;j<=width;j++)
		{
			if(i==post_x&&j==post_y)
			{
				printf("*");
			}else if(i==bullet_x&&j==bullet_y)
			{
				printf("|");
			}else if(i==enemy_x&&j==enemy_y){
				printf("@");
			}else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("得分：%d\n",score);
}
void updateWithoutInput()
{
    int flag=0;
	if(bullet_x>-1)
	{
		bullet_x--;
	}

	static int speed=0;

	speed=speed%10+1;
	if(speed==10)
	{
		enemy_x++;
	}
	if(enemy_x==bullet_x&&enemy_y==bullet_y)
    {
        score++;
        flag=1;
    }

	if( enemy_x>high || flag)
	{
		enemy_x=1;
		enemy_y=rand()%width+1;

	}

}

void updateWithInput()
{
	char input;
	if(kbhit())
	{
		input=getch();
		if(input=='a')
			post_y--;
		if(input=='d')
			post_y++;
		if(input=='w')
			post_x--;
		if(input=='s')
			post_x++;
		if(input==' ')
		{
			bullet_x=post_x-1;
			bullet_y=post_y;
		}
	}
}
void gotoxy(int x,int y)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(handle,pos);
}


