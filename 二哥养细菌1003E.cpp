#include<iostream>
#include<vector>
using namespace std;
void change(vector<vector<int>>& arr,int i,int j)
{
	if (!arr[i][j - 1])arr[i][j - 1] = -1;
	if (!arr[i + 1][j])arr[i + 1][j] = -1;
	if (!arr[i - 1][j])arr[i - 1][j] = -1;
	if (!arr[i][j + 1])arr[i][j + 1] = -1;
}
int main()
{
	int len;
	cin >> len;
	vector<vector<int>>arr(len+2,vector<int>(len+2));
	for (int i = 1; i < len + 1; i++)
		for (int j = 1; j < len + 1; j++)
			cin >> arr[i][j];
	bool flag = true;
	int round = -1;
	while (flag)
	{
		round++;
		flag = false;
		for (int i = 1; i < len + 1; i++)
			for (int j = 1; j < len + 1; j++)
				if (arr[i][j] == 1) {
					change(arr, i, j);
				}
		for (int i = 1; i < len + 1; i++)
			for (int j = 1; j < len + 1; j++)
				if (arr[i][j] == -1) {
					arr[i][j] = 1;
					flag = true;
				}
	}
	cout << round;
    return 0;
}

