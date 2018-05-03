//ƒ§¡ı»Íº—¥Û…Ò
#include <iostream>
#include<iomanip>
#include<cstring>
#define maxn 150
using namespace std;
int main()
{
    int n,x,y;
    int a[maxn][maxn];
    cin>>n;
    memset(a,0,sizeof(a));
    int tot=a[x=0][y=0]=1;
    while(tot<n*n)
    {
        while(y+1<n&&!a[x][y+1])a[x][++y]=++tot;
        while(x+1<n&&!a[x+1][y])a[++x][y]=++tot;
        while(y-1>=0&&!a[x][y-1])a[x][--y]=++tot;
        while(x-1>=0&&!a[x-1][y])a[--x][y]=++tot;
    }
    for(x=0;x<n;x++)
        {
        for(y=0;y<n;y++)
        cout<<setw(6)<<a[x][y];
        cout<<'\n';
        }
    return 0;
}
