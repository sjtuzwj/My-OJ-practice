#include <iostream>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if (a<b+c&&b<a+c&&c<a+b)
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
        cout<<1;
        else
        cout<<0;
    else
    cout<<-1;
    return 0;
}
