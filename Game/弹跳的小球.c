#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
int main(){
	int velocity=1;
	int height=20;
	int x=5,y=10;
	while(1)
	{
		x=x+velocity;
		system("cls");
		
		for(int i=0;i<x;i++)
		{
			printf("\n");
		}
		for(int j=0;j<y;j++)
		{
			printf(" ");
		}
		printf("O");
		printf("\n");
		
		if(x==height || x==0)
		{
			velocity=-velocity;
			printf("\a");
		}
			
		
	}
	
	
	

	return 0;
}
