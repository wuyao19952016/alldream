#include<iostream>
/*
�� n������  �� A -> B 
*/ 

void hanno(int n,char sta,char end,char temp)// ��n�����Ӵ�sta����temp�ƶ���end 
{
	if(n==1)
	{
		cout<<"��һ�����Ӵ�"<<sta<<" -> "<<end<<endl;
	}else
	{
		// �� n-1 �����Ӵ�sta -> temp 
		hanno(n-1,sta,temp,end); 
		
		// ��ʣ�µ�һ�� �� sta -> end
		hanno(1,sta,end,temp);
		
		// ��n-1 ������ ��temp -> end 
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
