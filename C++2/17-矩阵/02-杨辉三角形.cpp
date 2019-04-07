#include<iostream>
using namespace std;
/* 1 -10000  int a[10001]*/
int main()
{
	int nums[11][11]={0};
	nums[0][0]=nums[1][0]=nums[1][1]=1;
	
	for(int i=2;i<10;i++){
		for(int j=0;j<=i;j++){
			if(j>=1 && j<i){
				nums[i][j]=nums[i-1][j]+nums[i-1][j-1];
			}else{
				nums[i][j]=1;
			}
		}
	}
	for(int i=0;i<10;i++){
		
		for(int j=0;j<=i;j++){
			printf("%4d ",nums[i][j]);
		}
		cout<<endl;
	}
	return 0;
}
