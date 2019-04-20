#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100]={0};
    gets(str);
    str[0]-=32;
    for(int i=1;i<strlen(str)-1;i++)
    {
        if(str[i-1]==' ')
        {
            str[i]-=32;
        }
    }
    cout<<str;
    return 0;
}
 