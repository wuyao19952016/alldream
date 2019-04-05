#include<iostream>
using namespace std;

int main()
{
	int nums[101];
	for(int i=1;i<=100;i++)
	{
		nums[i]=i;
	}
	for(int i=1;i<=100;i++)
	{
		cout<<nums[i]<<" ";
	}
	return 0;
}
