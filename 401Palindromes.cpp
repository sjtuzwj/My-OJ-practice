#include <iostream>
#include <cctype>
#include <string>
using namespace std;
const char rev[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";//36 char matched site
const char* msg[] = { "not a palindrome","a regular palindrome","a mirrored string","a mirroered palindrome" };
char reverse(char ch) {
	if (isalpha(ch))return rev[ch - 'A'];
	return rev[ch - '0' + 25];
}
int main()
{
		string str;
		while (cin >> str)
		{
			int len = str.size();
			bool p = 1, m = 1;
			for (int i = 0; i < (len + 1) / 2; i++)
			{
				if (str[i] != str[len - 1 - i])p = 0;//palindrome
				if (reverse(str[i]) != str[len - 1 - i])m = 0;//mirror
			}
			cout << msg[m * 2 + p];
		}
    return 0;
}