#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool cpr(string a,string b)//Anti-dictionary order
{
    return a > b;
}
int main()
{
    string str[30];
    char ch;
    int i=1;
    cin>>ch;
    cin>>str[0];//no over boundary
    while(str[i-1][0]!='@')
    cin>>str[i++];
    int num=i-1;
    for(i=0;i<num;i++)
    str[i].erase(remove(str[i].begin(),str[i].end(),ch),str[i].end());//delete ch
    sort(str,str+num,cpr);//sort
    cout<<str[0];
    for(i=1;i<num;i++)
    cout<<endl<<str[i];//no end line in front or in the end
    return 0;
}
