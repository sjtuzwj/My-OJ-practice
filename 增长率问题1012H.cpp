#include <iostream>
#include <cstring>
#define MAXSIZE 200005
using namespace std;
int len[MAXSIZE];//�������ֵΪn������Խ��
long long num[MAXSIZE],maxnum[MAXSIZE];//�������ֵΪC2n�����ܻᳬ��int���淶Χ������
int main()
{
    int i,j,t,s,tmp,res=1;
    cin>>s>>t;
    memset(maxnum,0,MAXSIZE*sizeof(long long));
    maxnum[1]=t-s+1;
    for(i=s;i<=t;i++)
        len[i]=num[i]=1;//ֻ����s��t�ڵ�ֵΪ1����,������memset
    for(i=s;i<=t;i++)
        for(j=1;j<=100;j++)
        if((i*j)%100==0)//������������Ϊ��������
    {
        tmp=i+i*j/100;//����֮�����
        if(tmp<=t)
       {
           if(len[i]+1>len[tmp])//��tmp��β�����о�С��temp����i����
        {
            len[tmp]=len[i]+1;
            num[tmp]=num[i];//����Щ���и���Ϊtemp����i����
        }
        else if(len[i]+1==len[tmp])//��tmp��β�ж�����У��ҳ������
            num[tmp]+=num[i];//����Щ���������ϲ�
        res=max(res,len[tmp]);//��������г���
        maxnum[len[i]+1]+=num[i];//���³���Ϊlen[i]��������Ŀ
       }
    }
    cout<<res<<endl<<maxnum[res];
    return 0;
}
