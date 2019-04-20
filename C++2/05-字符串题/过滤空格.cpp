#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[201]={0};
    int num=0;

    gets(str);

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!=' ')
        {
            cout<<str[i];
            num=0;
        }else
        {
            if(num==0)
            {
                cout<<str[i];
                num=1;
            }
        }
        
    }

    return 0;
}
