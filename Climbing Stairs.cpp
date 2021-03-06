struct Matrix
{
	long long a[2][2];
	Matrix() {
		memset(a, 0, sizeof(a));
	}
	Matrix operator * (const Matrix&y)const {
		Matrix ans;
		for (int i = 0; i <= 1; i++)
			for (int j = 0; j <= 1; j++)
				for (int k = 0; k <= 1; k++)
					ans.a[i][j] += a[i][k] * y.a[k][j];
		return ans;
	}
	void operator = (const Matrix&b) {
		for (int i = 0; i <= 1; i++)
			for (int j = 0; j <= 1; j++)
				a[i][j] = b.a[i][j];
	}
};
class Solution {
public:
	int climbStairs(long long x) {
		Matrix ans, trs;
		ans.a[0][0] = ans.a[1][1] = 1;
		trs.a[0][0] = trs.a[1][0] = trs.a[0][1] = 1;
		while (x) {
			if (x & 1)
				ans = ans*trs;
			trs = trs*trs;
			x >>= 1;
		}
		return ans.a[0][0];
	}
};