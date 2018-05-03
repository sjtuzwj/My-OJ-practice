#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=2;
    while(i<=n)
    {
        if(n%i==0)
    {
        if(n/i!=1)
        cout<<i<<" ";
        else
            {
            cout<<i;
            break;
            }
        n=n/i;
        if(n%i==0)
            continue;
    }
    if(i>sqrt(n))
        i=n-1;
        i++;
        }
    return 0;
}
