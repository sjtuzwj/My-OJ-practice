#include <iostream>
#include <cstring>
using namespace std;
//begin:0,end:1,if:2,then:3,else:4
int cmp(char[]);//�ж��ַ�������
int bucket[5];//��¼�ַ�������
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
            if(cmp(arr[i])==1&&isif==1&&isbegin==1){cout<<"NO";flag=1;break;}//��ֹ���������Ϊ�ж�����
            if(bucket[0]<bucket[1]||bucket[2]<bucket[3]||bucket[2]<bucket[4])//���ùؼ��ʲ��ܶ���ǰ�ùؼ���
            {cout<<"NO";flag=1;break;}
        }
    if(!flag)
    {
    if(bucket[0]==bucket[1]&&bucket[2]==bucket[3])cout<<"YES";//���ùؼ�����ǰ�ùؼ���һһƥ��
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
