bool isPalindrome(int x) {
	if (x < 0)return false;//结尾没有符号,不是回文
	int tmp = x;
	long long res = 0;
	while (x) {//reverse
		res = res * 10 + x % 10;
		x /= 10;
	}
	if (tmp == res)return true;
	else return false;
}

