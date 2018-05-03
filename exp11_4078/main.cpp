#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
struct student
{
   string name;
   int ch;
   int ma;
   int en;
   int tot;
   void settot(){tot=ch+ma+en;}
   friend istream& operator>>(istream&,student&);
   friend ostream& operator<<(ostream&,const student&);
};
istream& operator>>(istream&input,student&stu)
{
    input>>stu.name>>stu.ch>>stu.ma>>stu.en;
    stu.settot();
}
ostream& operator<<(ostream&output,const student&stu)
{
    output<<stu.name<<' '<<stu.tot;
}
bool cpr(const student&x,const student&y)
{
    if(x.tot!=y.tot)return x.tot>y.tot;
    if(x.ch!=y.ch)return x.ch>y.ch;
    if(x.ma!=y.ma)return x.ma>y.ma;
    return x.name<y.name;
}
int main()
{
    int n;
    cin>>n;
    vector<student>students(n);
    for(int i=0;i<n;i++)cin>>students[i];
    sort(students.begin(),students.end(),cpr);
    int k;
    cin>>k;
    cout<<students[k-1];
    return 0;
}
