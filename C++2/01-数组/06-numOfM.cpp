#include<iostream>
/*
input:
3
1 4 6
4
output:
1
*/
using namespace std;
int main()
{
	int num[20],count=0;;
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	cin>>m;
	for(int i=0;i<n;i++)
	{
		if(num[i]==m)
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}
