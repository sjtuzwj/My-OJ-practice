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
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		len[i] = arr[i].size();
	}
	int tot = 0, count = 0;
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < len[j]; i++)
			{
			if (arr[j][i] == 'O')
			{
				count++;
				tot += count;
			}
			else count = 0;
		}
	    cout << tot << endl;
		count = 0;
		tot = 0;
     }
    return 0;
}

