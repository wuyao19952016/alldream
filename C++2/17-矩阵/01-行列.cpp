#include<iostream>
using namespace std;
int main()
{
	int nums[3][4]={0};
	int l,c,n,max;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cin>>nums[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(max<nums[i][j]){
				l=i;
				c=j;
			}
		}
	}
	cout<<l+1<<" "<<c+1;
	return 0;
}
