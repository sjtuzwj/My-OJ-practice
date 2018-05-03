#include <iostream>
#include <cstring>
#define MAXSIZE 200005
using namespace std;
int len[MAXSIZE];//长度最大值为n，不会越界
long long num[MAXSIZE],maxnum[MAXSIZE];//数量最大值为C2n，可能会超出int储存范围！！！
int main()
{
    int i,j,t,s,tmp,res=1;
    cin>>s>>t;
    memset(maxnum,0,MAXSIZE*sizeof(long long));
    maxnum[1]=t-s+1;
    for(i=s;i<=t;i++)
        len[i]=num[i]=1;//只设置s到t内的值为1即可,不可用memset
    for(i=s;i<=t;i++)
        for(j=1;j<=100;j++)
        if((i*j)%100==0)//即存在增长率为整数的数
    {
        tmp=i+i*j/100;//增长之后的数
        if(tmp<=t)
       {
           if(len[i]+1>len[tmp])//以tmp结尾的子列均小于temp加入i子列
        {
            len[tmp]=len[i]+1;
            num[tmp]=num[i];//则这些子列更新为temp加入i子列
        }
        else if(len[i]+1==len[tmp])//以tmp结尾有多个子列，且长度相等
            num[tmp]+=num[i];//则这些子列数量合并
        res=max(res,len[tmp]);//更新最长子列长度
        maxnum[len[i]+1]+=num[i];//更新长度为len[i]的子列数目
       }
    }
    cout<<res<<endl<<maxnum[res];
    return 0;
}
