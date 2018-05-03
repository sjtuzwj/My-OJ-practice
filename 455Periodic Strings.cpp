#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<string>arr(n);
	vector<int>len(n);
	bool first = 1;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		len[i] = arr[i].size();
	}
	for (int i = 0; i < n; i++)
		for (int k = 1; k <= len[i]; k++)
		{
			if ((len[i] % k) == 0) 
			{ 
				bool flag = true; 
				for (int j = 0; j < len[i]; j++)
					if (arr[i][j] != arr[i][j%k])flag = false;
				if (flag) 
				{
					if (!first)cout <<endl;  cout<< k; first = 0; break;
				}
			}
		}
	return 0;
}