#include<iostream>
#include<cstring>
using namespace std;
int main(){

    char str[20],end[10],shortPhone[10]={'6'};

    cin>>str;
    strcpy(end,&str[6]);
    strcat(shortPhone,end);

    cout<<shortPhone;

    return 0;
}
