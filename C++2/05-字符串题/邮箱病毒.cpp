#include<iostream>
#include<cstring>
using namespace std;

/*
strcpy(str1,str)   (µÿ÷∑1£¨µÿ÷∑2)

for(int i=0;i<strlen(str);i++)
{
    if(str[i]=='@')
    {
        strncpy(pre,str,i);
        cout<<"pre:"<<pre<<endl;
        index=i+1;
    }
}
for(int i=index,j=0;i<strlen(str);i++)
{
    end[j++]=str[i];
}
cout<<"end:"<<end;


strncpy(str1,str,n)
*/
int main(){
    char str[20],pre[20],end[20]={0};
    int index=0;
    cin>>str;
    
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='@')
        {
            index=i+1;
            str[i]='\0';
            break;
        }
    }

    strcpy(pre,str);
    strcpy(end,&str[index]);

    cout<<end<<"@"<<pre;

    return 0;
}
