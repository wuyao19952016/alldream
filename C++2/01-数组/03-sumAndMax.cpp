#include<iostream>
/*
input:
7 4 9 5 1 2 3 6 7 1
*/
using namespace std;

int main()
{
	int num[10],sum=0,max=0;
	for(int i=0;i<10;i++)
	{
		cin>>num[i];
	}
	for(int i=0;i<10;i++)
	{
		if(max<num[i])
		{
			max=num[i];
		}
		sum+=num[i];
	}
	
	cout<<sum<<endl<<max;
	
	return 0;
}
