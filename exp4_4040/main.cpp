#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int N,m=0;
    int*pt=new int[m];
    int temp=10,total=0;
    if(a>b||a<=0||b<=0)
        cout<<"error";
    else{
    for(int i=a;i<=b;i++)
        {
            N=i;
        while(N){
            temp=N%10;
            total+=temp*temp*temp;
            N/=10;
        }
          if (i==total)
          {
            pt[m]=i;
            m++;
           }
        total=0;
        }
    if(m==0)
        cout<<"no";
    else
        {
        for(int i=0;i<=m-2;i++)
        cout<<pt[i]<<"\n";
        cout<<pt[m-1];
        }
    }
    return 0;
}
