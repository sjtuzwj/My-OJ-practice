#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *kawai=new int[n];
    int *nogood=new int[n]();
    for(int k=0;k<n;k++)
    cin>>kawai[k];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if (kawai[j]<kawai[i])
            nogood[i]++;
        }
        cout<<nogood[i]<<" ";
    }
    return 0;
}
