#include <iostream>
#include <cstring>
using namespace std;
//begin:0,end:1,if:2,then:3,else:4
int cmp(char[]);//判断字符串种类
int bucket[5];//记录字符串个数
int main()
{
    int n;
    bool flag=0,isif=0,isbegin=0;
    cin>>n;
    char arr[101][6];
    for(int i=0;i<n;++i)
        {
            cin>>arr[i];
            bucket[cmp(arr[i])]++;
            if(cmp(arr[i])==2)isif=1;
            if(cmp(arr[i])==3&&isif==1)isif=0;
            if(cmp(arr[i])==0&&isif==1)isbegin=1;
            if(cmp(arr[i])==1&&isif==1&&isbegin==1){cout<<"NO";flag=1;break;}//防止复合语句作为判断条件
            if(bucket[0]<bucket[1]||bucket[2]<bucket[3]||bucket[2]<bucket[4])//后置关键词不能多于前置关键词
            {cout<<"NO";flag=1;break;}
        }
    if(!flag)
    {
    if(bucket[0]==bucket[1]&&bucket[2]==bucket[3])cout<<"YES";//后置关键词与前置关键词一一匹配
    else cout<<"NO";
    }
    return 0;
}
int cmp(char arr[])
{
    if(!strcmp(arr,"begin"))return 0;
    if(!strcmp(arr,"end"))return 1;
    if(!strcmp(arr,"if"))return 2;
    if(!strcmp(arr,"then"))return 3;
    if(!strcmp(arr,"else"))return 4;
}
