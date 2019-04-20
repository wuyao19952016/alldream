#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[30]={0};
    cin>>str;
    for(int i=strlen(str)-1;i>=0;i--)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            cout<<str[i];
        }
    }
    return 0;
}
