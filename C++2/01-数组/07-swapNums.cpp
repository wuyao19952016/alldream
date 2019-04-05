#include<iostream>
using namespace std;
/*
input:
4 2 1 3 4
5 5 4 3 2 1
0
output:
1 2 3 4
1 4 3 2 5
*/
int main()
{
	int n;
	int num[20],index=0,tmp,min;
	while(1)
	{
		cin>>n;
		if(n==0){
			break;
		}
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
			if(i==0)
			{
				min=num[i];	
				index=0;
			}
			
			if(min>num[i])
			{
				min=num[i];
				index=i;
			}
		}
		
		tmp=num[0];
		num[0]=num[index];
		num[index]=tmp;
		
		for(int i=0;i<n;i++)
		{
			cout<<num[i]<<" ";
		}
		cout<<endl;
	}

	
	
	return 0;
}
