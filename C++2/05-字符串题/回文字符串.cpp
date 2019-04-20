#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[21]={0},dstr[21]={0};
    int flag=0;
    cin>>str;
    int len=strlen(str);

    // for(int i=0;i<=(len-2)/2;i++)// 0 len-2  1 ~len-3 2 ~ len-4
    // {
    //     if(str[i]!=str[len-2-i])
    //     {
    //         flag=1;
    //     }
    // }
    // if(flag==0)
    // {
    //     cout<<"yes";
    // }else
    // {
    //     cout<<"no";
    // }
    for(int i=0;i<len-1;i++)
    {
        dstr[i]=str[len-2-i];
    }
    dstr[len-1]='.';

    if(strcmp(str,dstr)==0)
    {
        cout<<"yes";
    }else
    {
        cout<<"no";
    }

    return 0;
}
