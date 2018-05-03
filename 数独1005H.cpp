#include<iostream>
using namespace std;
int a[9][9];
bool check(int a[9][9],int l,int r,int key)
{
    for(int i=0;i<9;i++)            //  判断行:非己
        if(a[l][i]==key&&i!=r) return false;
    for(int j=0;j<9;j++)            //  判断列:非己
        if(a[j][r]==key&&j!=l) return false;
    int x=(l/3)*3,y=(r/3)*3;
    for(int i=x;i<x+3;i++)          //  判断该小宫格；非己
        for(int j=y;j<y+3;j++)
            if(a[i][j]==key&&(i!=l&&r!=j)) return false;
    return true;
}
int main()
{
    int n;
    cin>>n;
    while(n--){
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
                cin>>a[i][j];
        bool flag=true;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                flag=check(a,i,j,a[i][j]);
                if(!flag) break;
            }
            if(!flag) break;
        }
        if(!flag)cout<<"Wrong"<<endl;
        else cout<<"Right"<<endl;
    }
    return 0;
}

