#include<iostream>
using namespace std;
/* 1 -10000  int a[10001]  10^5*/
/*  
线性代数  +  概率与数理统计  
中国知网  

m*n  
顺时针 
b[j][m-i]=a[i][j]

逆时针
b[j][n-i]=a[i][j]

*/
int num=11;
int main()
{
	int a[3][5]={0},b[5][3]={0}; 
	int n;
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			a[i][j]=num+j;
		}
		num+=10;
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	cin>>n;
	if(n%2!=0){
		
		/*
		j 2-i   i  j
		0 2   0 0
		1 1   1 1
		1 2   0 1
		*/
		for(int i=0;i<3;i++){
			for(int j=0;j<5;j++){
				b[j][2-i]=a[i][j];
			}
		}
	}else{
		for(int i=0;i<3;i++){
			for(int j=0;j<5;j++){
				b[4-j][i]=a[i][j];
			}
		}
	}

	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
