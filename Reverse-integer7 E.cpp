int reverse(int x) {
	string str(to_string(x));
	char temp;
	size_t i, j;
	for (j = 0, i = str.size() - 1; j < i; --i, ++j) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	if (str.back() == '-') {
		str.pop_back();
		str.insert(str.begin(), '-');
	}
	istringstream is(str);
	int n;
	long long ln;
	is >> ln;
	n = ln;
	if (ln >= 2147483648 || ln + 2147483648 < 0)return 0;
	else return n;
}
int reverse(int x) {
	long long res = 0;
	while (x) {
		res = res * 10 + x % 10;//将x的最后一位赋给res的最后一位,res的所有位前移,x的缩减顺序等于res的增加顺序,实现reverse
		x /= 10;
	}
	return (res<INT_MIN || res>INT_MAX) ? 0 : res;
}