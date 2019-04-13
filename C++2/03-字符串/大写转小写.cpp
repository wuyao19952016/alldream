#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;
int main()
{
	char str[100];
	gets(str);
	
	for(int i=0;i<strlen(str);i++)
	{
		// ±È½ÏÔËËã·û 
//		if(str[i]>='A'&&str[i]<='Z')
//		{
//			count++;
//		}

		if(isupper(str[i]))
		{
			str[i]+=32;
			
		}
		//cout<<str[i]; 
	}
	cout<<str;

	
	return 0;
}

