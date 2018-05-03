#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int**arr=new int*[n];
    for(i=0;i<n;++i)
        arr[i]=new int[m];
    for(i=0;i<n;++i)
        for(j=0;j<m;++j)
        cin>>arr[i][j];
    cout<<m<<' '<<n<<endl;
    for(j=0;j<m;++j)
        {
            for(i=n-1;i>=0;--i)
                cout<<arr[i][j]<<' ';
            if(j!=m)cout<<"\n";
        }
    for(i=0;i<n;++i)
    delete[]arr[i];
    delete[]arr;
    return 0;
}
