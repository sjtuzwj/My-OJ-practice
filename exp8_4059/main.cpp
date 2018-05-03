#include <iostream>
using namespace std;
int main()
{
    int max=0;
    int n,i,site,temp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
    if(temp>max)
        {max=temp;site=i;}
    }
    cout<<max<<' '<<site+1;
    return 0;
}
