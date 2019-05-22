#include <iostream>
using namespace std;
int main()
{
    int num;//定义变量，接收两位数整数
    cin>>num;//输入两位数
    cout<<num%10<<endl;//输出个位
    cout<<num/10%10;//输出十位

    return 0;
}