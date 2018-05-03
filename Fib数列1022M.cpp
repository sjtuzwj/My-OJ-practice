#include <iostream>
using namespace std;
void fbi(int n);
int main()
{
    long long n;
    cin>>n;
    if(n%2040!=0)fbi(n%2040);//fbi对2010取模周期为2040
    else fbi(2040);
    return 0;
}
void fbi(int n)
{
    int f1=1,f2=1,res,total;
    if(n==1||n==2)cout<<1;
    else for(long long i=0;i<n-2;i++)
    {
        total=f1+f2;
        if(total<2010)res=total;
        else
        res=total%2010;
        f2=f1;f1=res;
    }
    cout<<res;
}
