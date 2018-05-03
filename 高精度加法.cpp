#include<iostream>
#include<cstring>
using namespace std;
char a1[1000000],b1[1000000];
int a[1000000],b[1000000],c[1000000];
int main()
{

    int lena,lenb,lenc,i,x;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    cin>>(a1);
    cin>>(b1);
    lena=strlen(a1);
    lenb=strlen(b1);
    for (i=0;i<=lena-1;i++)
    {
        a[lena-i]=a1[i]-48; //将操作数放入a数组 　
    }

    for (i=0;i<=lenb-1;i++)
    {
        b[lenb-i]=b1[i]-48; //将操作数放入b数组
    }
    lenc =1;
    x=0;
   while(lenc <=lena || lenc <=lenb)
   {
        c[lenc]=a[lenc]+b[lenc]+x; //两数相加 　
        x=c[lenc]/10;   //要进的位
        c[lenc]=c[lenc]%10;     //进位后的数
        lenc++;     //数组下标加1
    }

    c[lenc]=x;
    if (c[lenc]==0)
    {
        lenc--; //处理最高进位
    }

    for (i=lenc;i>=1;i--)
    {
        cout<<c[i]; //输出结果
    }
    cout<<endl;
    return 0;
}
