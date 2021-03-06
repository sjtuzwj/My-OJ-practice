#include<vector>
#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
#include<iomanip>
using namespace std;
double add(char ch)
{
	if (ch == 'C')return 12.01;
	if (ch == 'H')return 1.008;
	if (ch == 'O')return 16.00;
	if (ch == 'N')return 14.01;
}
int main()
{
	int n;
	cin >> n;
	vector<string>arr(n);
	vector<int>len(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		len[i] = arr[i].size();
	}
	int count = 1, num = 0;
	double tot = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < len[i]; j++)
		{
			if (isalpha(arr[i][j]))
			{
				while (j + count < len[i]&& isdigit(arr[i][j + count]))
					num = num * 10 + arr[i][j + count++] - '0';
				tot += max(num,1)*add(arr[i][j]);
				num = 0; count = 1;
			}
		}
			cout <<fixed<<setprecision(3)<< tot << endl;
			tot = 0;
	}
	return 0;
}

