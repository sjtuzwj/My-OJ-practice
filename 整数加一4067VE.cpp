#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[100];
    cin>>arr;
    int i,len=strlen(arr);
    int str[100]{0};
    for(i=0;i<len;i++)
        str[i]=arr[len-1-i]-48;
    str[0]++;
    for(i=0;i<len;i++)
        if(str[i]==10)
            {
                str[i+1]++;
                str[i]=0;
            }
    if(str[i]==1)
        cout<<str[i];
    for(i=len-1;i>=0;i--)
        cout<<str[i];
    return 0;
}
