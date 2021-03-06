#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
	int n, m,reg=1;
	while (cin >> n >> m&&n != 0)
	{
		int  amt = 0, tot, tmp, ent, ano = 0;
		double per, ave; 
		ent = m*n;
		if (reg != 1)cout << "\n";
		cout << "Region " << reg++<<"\n";
		vector<int>arr(ent);
		for (int i = 0; i < ent;i++) {
			cin >> arr[i]; amt += arr[i];
		}
		cin >> tot;
		sort(arr.begin(), arr.end());
		ave = arr[0];
		int cmp = tot - arr[ent - 1] * 100 * ent + amt*100;
		if (tot % 100)ano = tot % 100;
		tot = tot / 100;
		if (ent == 1)
		{
			ave += tot + double(ano) / 100;
			per = 100;
		}
		else if(cmp>=0) {
			ave = arr[ent-1]+double(cmp)/ent/100;
			per = 100;
		}
		else for (int i = 0; i < ent-1&&tot; i++)
		{
			tmp = (i + 1)*(arr[i + 1] - arr[i]);
			if (tot != 0)
			{
				ave += (tmp > tot) ? (double(tot) / (i + 1)) : (double(tmp)/(i + 1));
				tot -= (tmp > tot) ? tot : tmp;
			}
			per = double(i*100 + 100) / ent;
			if (tot == 0) {
				if(ano)ave += double(ano) / (100*i + 100); 
			}
		}
		cout << "Water level is " << fixed << setprecision(2) << ave << " meters.\n";
		cout << per-1e-6 << " percent of the region is under water.\n";
	}
	return 0;
}

