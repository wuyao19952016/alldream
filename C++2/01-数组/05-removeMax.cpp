#include<iostream>
using namespace std;
/*
input:
1 2 3 4 5
output:
10
*/
int main()
{
	int num[5],max,sum=0;
	for(int i=0;i<5;i++)
	{
		cin>>num[i];
		if(i==0) max=num[i];
		if(max<num[i])
		{
			max=num[i];
		}
		
		sum+=num[i];
	}
	
	cout<<sum-max;
	return 0;
}
