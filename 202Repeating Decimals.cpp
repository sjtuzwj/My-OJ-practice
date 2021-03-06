#include <iostream>  
#include <cstdlib>  
#include <cstring>  
#include <cstdio>  
using namespace std;
int r[3003], u[3003], s[3003];
int main()
{
	int n, m, t;
	while (cin >> n >> m) {
		t = n;//保留原分子
		memset(r, 0, sizeof(r));
		memset(u, 0, sizeof(u));
		int count = 0;
		r[count++] = n / m;//整数部分
		n = n%m;
		while (!u[n] && n) {//若u[n]!=0,即u[n]已被赋值,n相同,周期结束
			u[n] = count;//n对应第几位小数
			s[count] = n;//标记终止位置
			r[count++] = 10 * n / m;//存储r
			n = 10 * n%m;//更新n,最后一次更新时,n指向第一位周期小数
		}
		printf("%d/%d = %d", t, m, r[0]);
		printf(".");
		for (int i = 1; i < count && i <= 50; ++i) {
			if (n && s[i] == n) printf("(");//无限小数的第一位前才有括号
			printf("%d", r[i]);
		}
		if (!n) printf("(0");//n==0,为有限小数
		if (count > 50) printf("...");
		printf(")\n");
		printf("   %d = number of digits in repeating cycle\n\n", !n ? 1 : count - u[n]);//有限:1,无限:总长度-有限位数
	}
	return 0;
}