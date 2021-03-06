#include<iostream>
using namespace std;
long long fake(long long r)
{
    if (r < 10)return r;
    long long res = 0;
    long long digit = 1;
    long long n = r;
    long long first = 1;
    do
    {
        if (1<n<10)first = n;
        n /= 10; 
        digit *= 10;
    } while (n);
    digit /= 10;
    long long last = r % 10;
    res += (first - 1)*digit/10;
    long long mid = (r - first * digit) / 10;
    res += mid + 1;
    if (first > last)res--;
    while (digit!=10)
    {
        res += digit / 100*9;
        digit /= 10;
    }
    res += 9;
    return res;
}

int main()
{
    long long l, r;
    cin >> l >> r;
    long long ans = fake(r) - fake(l - 1);
    cout << ans;
    return 0;
}