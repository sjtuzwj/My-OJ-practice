#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int n,i;
    char ch;
    cin>>ch>>n;
    char*str=new char[n];
    memset(str,' ',n*sizeof(char));
    int a,b,c;
    a=(n+3)/2;
    b=c=(n-1)/2;
    str[b]=ch;
    for(int j=1;j<=n;j++)
{
        if(j<a&&j!=1)
        {
    b--;c++;
    str[b]=ch;
    str[c]=ch;
        }
        if(j==a)
        {
        str[b]=' ';
        str[c]=' ';
        }
        if(j>a)
        {
        b++;c--;
    str[b]=' ';
    str[c]=' ';
        }

        for(i=0;i<n;i++)
        cout<<str[i];
    if(j!=n)
    cout<<endl;
}
delete []str;
return 0;
}
