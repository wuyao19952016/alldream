#include<iostream>
using namespace std;
int main()
{
	int nums[10];
	for(int i=0;i<10;i++)
	{
		cin>>nums[i];
	}
	for(int i=9;i>=0;i--)
	{
		cout<<nums[i]<<" ";
	}
	return 0;
}
