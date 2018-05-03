#include <vector>
#include <iostream>
#include <string>
using namespace std;
string Manacher(string);
int main()
{
    string arr;
    cin>>arr;
    string str=Manacher(arr);
    int n=str.length();
    if(n!=1)
    cout<<n<<endl<<str;
    else cout<<"0";
    return 0;
}
string Manacher(string s)
{
    string t = "#*";
    for (int i = 0; i < s.length(); ++i)
    {
        t += s[i];
        t += "*";
    }//构造新字符串,合并奇偶
    vector<int> p(t.length(), 0);//存储回文串长度
    int mx = 0, id = 0, resLen = 0, resCenter = 0;
    for (int i = 1; i < t.length(); ++i)
    {
        p[i] = mx > i ? min(p[2 * id - i], mx - i) : 1;//正在理解,网上说这是算法精髓
        while (t[i + p[i]] == t[i - p[i]]) //判断回文
        ++p[i];
        if (mx < i + p[i])
        {
            mx = i + p[i];//右边界
            id = i;//最大回文串中心
        }
        if (resLen < p[i])
        {
            resLen = p[i];//储存最大的回文数
            resCenter = i;//储存最大符文串中心
        }
    }
    return s.substr((resCenter - resLen) / 2, resLen - 1);//截取pos1,length
}
