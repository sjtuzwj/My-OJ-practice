#include <iostream>
#include <cstring>
#define MAXSIZE 1000000
void bucketsort(int p[],int n);
int bucket[MAXSIZE]{0};
using namespace std;
int main()
{
    int n;
    int p[10000];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>p[i];
    bucketsort(p,n);
    for(int i=0;i<n;i++)
        cout<<p[i]<<' ';
    return 0;
}
void bucketsort(int p[],int n)
{

    int i;
    int j=0;
    for(i=0;i<n;i++)
    bucket[p[i]]++;
    memset(p,0,n);
    for(i=0;i<MAXSIZE;++i)
    {
    while(bucket[i]!=0)
    {
        p[j++]=i;
        bucket[i]--;
    }
    }
}
