#include <iostream>
using namespace std;
int main()
{
    int year,month;
    cin>>year>>month;
    if(year<0||year>10000||month<1||month>12)
        cout<<"Error!";
        else if(year%4==0&&year%100!=0&&month==2||year%400==0&&month==2)
        cout<<29;
             else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
             cout<<31;
                else if(month==4||month==6||month==9||month==11)
                cout<<30;
                      else
                      cout<<28;
    return 0;

}
