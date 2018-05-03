#include <iostream>
#include <cstring>
#define MAXSIZE 32
using namespace std;
void z(char[][MAXSIZE],char[],int,int,int,int);
int main()
{
    int n;
    cin>>n;
    char arr[MAXSIZE];
    memset(arr,'\0',MAXSIZE);
    cin>>arr;
    int len=strlen(arr);
    char str[MAXSIZE*10][MAXSIZE];//注意n不一定小于30,小心越界
    memset(str,'\0',MAXSIZE*MAXSIZE*10);
    z(str,arr,n,0,0,len);
    for(int i=0;i<n;i++)
        for(int j=0;j<MAXSIZE;j++)
    if(str[i][j]!='\0')
        cout<<str[i][j];
    return 0;
}
void z(char str[][MAXSIZE],char arr[],int n,int site,int tmp,int len)//分段打印
       {
           int i;
           if(tmp==len)return;
           for(i=0;i<n;i++)
           {
               str[i][site]=arr[tmp++];
               if(tmp==len)return;
           }
           i--;
           while(i>1)
           {
           str[--i][++site]=arr[tmp++];
           if(tmp==len)return;
           }
           z(str,arr,n,site+1,tmp,len);
       }
