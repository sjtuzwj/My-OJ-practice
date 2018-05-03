#include <iostream>

using namespace std;

int main()
{
    string str;
    char ch;
    bool flag=false;
    cin>>str>>ch;
    for(int i=0;str[i]!='\0';i++)
        if(str[i]==ch){cout<<i<<' ';flag=true;}
    if(!flag)cout<<"NULL";
    return 0;
}
