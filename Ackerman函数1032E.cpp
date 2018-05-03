#include <iostream>
using namespace std;
int ackerman(int,int);
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<ackerman(m,n);
    return 0;
}
int ackerman(int m,int n)
{
    if(m==0)return n+1;
    if(m!=0&&n==0)return ackerman(m-1,1);
    if(m!=0&&n!=0)return ackerman(m-1,ackerman(m,n-1));
}
