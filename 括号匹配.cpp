#include <iostream>
using namespace std;
void check(char[]);
int main()
{
    char arr[50][101];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-1;i++)
        {
            check(arr[i]);
            cout<<'\n';
        }
    check(arr[n-1]);
    return 0;
}
void check(char arr[])
{
    int left=0,right=0,i=0;
    while(arr[i]!='\0')
    {
        if(arr[i]=='(')left++;
        else right++;
    if(right>left){cout<<"NO";return;}
        i++;
    }
    if(right==left)cout<<"YES";
    else cout<<"NO";
    return;
}
