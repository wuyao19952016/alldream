#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int h,m,s,sum=0;
    scanf("%d:%d:%d",&h,&m,&s);
    sum=h*60*60+m*60+s;
    cout<<sum;
    return 0;
}