#include<iostream>
using namespace std;
/* 1 -10000  int a[10001]  10^5*/


int main()
{

	int a[4][4],b[4][4];
	int t=11;
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			a[i][j]=t+j;
		}
		t+=10;
	} 
	
	
	cout<<"��תǰ��\n";
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	} 
	
	/*
	��ת�� ��תǰ 
	       i  j 
	0,3    3,3
	2,1    1,1
	1,1    1,2
	*/
	
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			b[i][j]=a[3-j][i];
		}
	} 
//  ������ 
//	for(int i=0;i<4;i++)
//	{
//		for(int j=0;j<4;j++)
//		{
//			b[j][3-i]=a[i][j];
//		}
//	} 
//	
	
	
	
	cout<<"��ת��\n";
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	} 

	return 0;
}
