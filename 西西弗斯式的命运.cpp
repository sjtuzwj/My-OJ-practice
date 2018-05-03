#include <iostream>

using namespace std;

int main()
{
    int m,t,u,f,d,total(0),result;
    bool flag=0;
    cin>>m>>t>>u>>f>>d;
    char *arr=new char[t+1];
    for(int i=0;i<t;i++)
        {
            cin>>arr[i];
            if(!flag)
            {
            if(arr[i]!='f')
            total+=(u+d);
            else
            total+=2*f;
            if(total>m)
            {result=i;flag=true;}
            }
        }
    cout<<result;
    return 0;
}
