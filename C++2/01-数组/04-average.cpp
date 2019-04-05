#include<iostream>
using namespace std;
/*
input:
4.4 3.0 6.5 6.6 2.9 1.7 8.6 1.3 4.7 2.8
output:
4.25
5
 
*/ 
int main()
{
	float num[10],ave,sum=0;
	int count=0;
	for(int i=0;i<10;i++)
	{
		cin>>num[i];
		sum+=num[i];
	}
	ave=sum/10;
	for(int i=0;i<10;i++)
	{
		if(num[i]>ave)
		{
			count++;
		}
	}
	cout<<ave<<endl<<count;
	return 0;
}
