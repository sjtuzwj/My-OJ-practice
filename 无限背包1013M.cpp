#include <iostream>
#include <algorithm>
using namespace std;
struct item
{
    int c;
    int w;
    double p;
};
bool com(item&a,item&b){return a.p>b.p;}//按p从大到小排序
int main()//不知道为什么能用贪婪法
{
    int v,n;
    cin>>v>>n;
    item a[1001];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].c>>a[i].w;
        a[i].p=double(a[i].w)/a[i].c;
    }
    sort(a,a+n,com);//n*log2n
    int sum=0,j,k;
    for(int i=0;i<n;i++)
    {
        j=v/a[i].c;
        k=v%a[i].c;
        sum+=j*a[i].w;
        v=k;
    }
    cout<<sum;
    return 0;
}
