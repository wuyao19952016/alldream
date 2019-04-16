#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    float a,b;
    scanf("%f/%f",&a,&b);
    printf("%.1f/%.1f.%.1f",a,b,(a+b)/2);
    return 0;
}