#include<iostream>
int main()
{
    using namespace std;
    int x,y;
    cin>>x>>y;
    if (y>0)
    {
    cout<<x<<"+"<<y<<"="<<x+y<<endl;
    cout<<x<<"*"<<y<<"="<<x*y<<endl;
    cout<<x<<"/"<<y<<"="<<x/y<<endl;
    cout<<x<<"%"<<y<<"="<<x%y<<endl;
    }
    else if (y<0)
    {
    cout<<x<<"+("<<y<<")="<<x+y<<endl;
    cout<<x<<"*("<<y<<")="<<x*y<<endl;
    cout<<x<<"/("<<y<<")="<<x/y<<endl;
    cout<<x<<"%("<<y<<")="<<x%y<<endl;
    }
    else
    {
    cout<<x<<"+"<<y<<"="<<x+y<<endl;
    cout<<x<<"*"<<y<<"="<<x*y<<endl;
    cout<<x<<"/"<<y<<"=ERROR!"<<endl;
    cout<<x<<"%"<<y<<"=ERROR!"<<endl;
    }
    return 0;
}
