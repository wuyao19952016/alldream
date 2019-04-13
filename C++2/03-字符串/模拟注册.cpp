#include<iostream>
#include<cstring>
/*

*/
using namespace std;
int main()
{
	int flag;
	char account[100];
	char key[100],key2[100];
	while(1)
	{
		cout<<"ÇëÊäÈëÕËºÅ:";
		gets(account);
		
		if(strlen(account)<10)
		{
			
			break;
		}
		
	}
	
	while(1)
	{
		cout<<"ÇëÊäÈëÃÜÂë:";
		gets(key);
		if(strlen(key)<10)
		{
			flag=0;
			for(int i=0;i<strlen(key);i++)
			{
				if((key[i]>='0'&&key[i]<='9')||(key[i]>='a'&&key[i]<='z')||key[i]>='A'&&key[i]<='Z')
				{
					
				}else
				{
					flag=1;
					break;
				}
			}
			
			if(flag==0)
			{
				cout<<"ÇëÔÙ´ÎÊäÈëÃÜÂë:";
				gets(key2);
				if(strcmp(key,key2)==0)
				{
					cout<<"×¢²á³É¹¦!"; 
					break;
				}
				
				
			}
			
			
		}
		
		
	}
	
	return 0;
}
