#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
    char arr[81];
    bool bucket[128];
    memset(bucket,0,128);
    int n,len,m=0;
    cin>>n;
    cin.getline(arr,80);
    len=strlen(arr);
    for(int i=0;i<len;i++)
    {
    if(isdigit(arr[i]))
    bucket[int(arr[i])]=true;
    if(islower(arr[i]))
    bucket[int(toupper(arr[i]))]=true;
    if(isupper(arr[i]))
    bucket[int(tolower(arr[i]))]=true;
    }
    memset(arr,'\0',81);
    for(int i=127;i>=0;i--)
    {
        if(bucket[i])
        {
            arr[m++]=char(i);
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr;
    return 0;
}
