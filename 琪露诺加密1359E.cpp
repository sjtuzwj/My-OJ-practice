//改造完成plus版本
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string str="";
    int result=0;
    getline(cin,str);
    for(int i=0;i<str.size();i++)
    {
        if(isupper(str[i]))
            result+=(str[i]-64)*(i+1);
        else if(islower(str[i]))
            result+=(str[i]-70)*(i+1);
    }
    cout<<result;
    return 0;
}
