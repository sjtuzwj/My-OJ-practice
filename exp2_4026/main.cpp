#include<iostream>
int main()
{
    using namespace std;
    char a,b,c,d;
    float x;
    cin>>x;
    a=x/1000;
    b=(x-a*1000)/100;
    c=(x-a*1000-b*100)/10;
    d=x-a*1000-b*100-c*10;
    a=a+77;
    b=b+77;
    c=c+77;
    d=d+77;
    cout<<a<<b<<c<<d<<endl;
    return 0;
}
