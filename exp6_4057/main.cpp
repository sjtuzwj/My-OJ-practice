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
    }//�������ַ���,�ϲ���ż
    vector<int> p(t.length(), 0);//�洢���Ĵ�����
    int mx = 0, id = 0, resLen = 0, resCenter = 0;
    for (int i = 1; i < t.length(); ++i)
    {
        p[i] = mx > i ? min(p[2 * id - i], mx - i) : 1;//�������,����˵�����㷨����
        while (t[i + p[i]] == t[i - p[i]]) //�жϻ���
        ++p[i];
        if (mx < i + p[i])
        {
            mx = i + p[i];//�ұ߽�
            id = i;//�����Ĵ�����
        }
        if (resLen < p[i])
        {
            resLen = p[i];//�������Ļ�����
            resCenter = i;//���������Ĵ�����
        }
    }
    return s.substr((resCenter - resLen) / 2, resLen - 1);//��ȡpos1,length
}
