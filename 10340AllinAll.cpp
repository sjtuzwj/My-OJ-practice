#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a, b;
	bool first = 1;
	while (cin >> a >> b)
	{
		int i , j=-1;
		int len1=a.size(), len2=b.size();
		for (int i = 0; i < len1; i++)
		{
			for (j++; j < len2; j++)
			{
				if (a[i] == b[j])break;
			}
		}
		if (!first) cout << endl; first = 0; 
		if (j >= len2)cout << "NO";
		else cout << "YES";
	}
	return 0;
}

