#include<iostream>
#include<cmath>
using namespace std;
bool check[20000001];//��˵��̬����ȶ�̬�����,���ǳ���1mb�������ȫ��
int main()
{
    int n,j,i=3,m;
    cin>>n;
    m=sqrt(n);
    cout<<2;
    while(i<=m)
    {
        if(!check[i])
        {
        cout<<' '<<i;
        for(j=i*i;j<=n;j+=i)
        {
            check[j]=true;
        }
        }
        i+=2;
    }
    while(i<=n)
    {
        if(!check[i])
        cout<<' '<<i;
        i+=2;
    }
    return 0;
}
