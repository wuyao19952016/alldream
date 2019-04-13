#include<iostream>
#include<cstring>
#include<cctype>
// cctype
using namespace std;
int main()
{
	char str[100];
	int count=0;
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
			count++;
		}
	}
	
	cout<<count;
	
	return 0;
}
