#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int year,month,day,h,m,s;
    float num=0;
    scanf("%d-%d-%d,%d:%d:%d",&year,&month,&day,&h,&m,&s);

    num=(year+month+day+h+m+s)/6.0£»

    printf("%.2f",num);

    return 0;
}
