#include<iostream>
/*
将 n个盘子  从 A -> B 
*/ 

void hanno(int n,char sta,char end,char temp)// 将n个盘子从sta借助temp移动到end 
{
	if(n==1)
	{
		cout<<"将一个盘子从"<<sta<<" -> "<<end<<endl;
	}else
	{
		// 将 n-1 个盘子从sta -> temp 
		hanno(n-1,sta,temp,end); 
		
		// 将剩下的一个 从 sta -> end
		hanno(1,sta,end,temp);
		
		// 将n-1 个盘子 从temp -> end 
		hanno(n-1,temp,end,sta);
	}
	
} 

int main()
{
	int n;
	cin>>n; 
	
	hanno(n,'A','B','C');
	
	
	return 0;
}
