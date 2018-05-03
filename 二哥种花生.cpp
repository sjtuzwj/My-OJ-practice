#include<iostream>
using namespace std;
int main()
{
    int l,w,p;
    cin>>l>>w;
    int **store=new int*[l];
    for(int i=0;i<l;i++)store[i]=new int[w];
    for (int i = 0; i < l; ++i)
        for (int j = 0; j < w; ++j)
            {
            cin >> p;
            if(i==0&&j==0)store[i][j]=p;
            else if(i==0&&j>0)store[i][j]=p+store[i][j-1];
            else if(i>0&&j==0)store[i][j]=p+store[i-1][j];
            else store[i][j]=p+store[i][j-1]+store[i-1][j]-store[i-1][j-1];
            }
    int a, b,max(0),temp(0);
    cin>>a>>b;
    for(int i = a - 1; i < l; ++i)
        for (int j = b - 1; j < w; ++j)
            {
            if(i==a-1&&j==b-1)temp=store[i][j];
            else if(i==a-1&&j>b-1)temp=store[i][j]-store[i][j-b];
            else if(i>a-1&&j==b-1)temp=store[i][j]-store[i-a][j];
            else temp=store[i][j]-store[i-a][j]-store[i][j-b]+store[i-a][j-b];
            max=max>temp?max:temp;
            }
    cout<<max;
    for (int i = 0; i < l; ++i)
    delete[] store[i];
    delete[] store;
    return 0;
}
