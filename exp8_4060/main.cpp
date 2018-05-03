#include <iostream>
#include <cstring>
void bucketsort(int[],int);
int time(int[],int);
using namespace std;
int main()
{
    int n,total;
    int t[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>t[i];
    bucketsort(t,n);//ÕûÊı¼òÒ×Í°ÅÅĞò
    total=time(t,n);
    cout<<total;
}
int time(int t[],int n)
{
    switch(n)
    {
        case 1:
            return t[0];
        case 2:
            return t[1];
        case 3:
            return t[0]+t[1]+t[2];
    }
    if(2*t[1]>t[n-2]+t[0])return t[n-1]+t[n-2]+2*t[0]+time(t,n-2);
    else return t[n-1]+t[0]+2*t[1]+time(t,n-2);
}
void bucketsort(int p[],int n)
{
    int bucket[100]={0};
    int i;
    int j=0;
    for(i=0;i<n;i++)
        bucket[p[i]]++;
    memset(p,0,n);
    for(i=0;i<100;++i)
        while(bucket[i]!=0)
    {
        p[j++]=i;
        bucket[i]--;
    }
}
