#include<iostream>
using namespace std;
class Time {
    friend ostream& operator<<(ostream&, const Time&);
    friend istream& operator>>(istream&, Time&);
private:
    int s;
    int m;
    int h;
    void set();
public:
    Time() = default;
    Time& operator++();
    Time operator++(int);
    Time& operator--();
    Time operator--(int);
    Time& operator+=(const Time& ano);
    Time& operator-=(const Time& ano);
};

Time& Time::operator++() {
    s++;
    set();
    return *this;
}
Time Time::operator++(int) {
    Time tmp = *this;
    ++(*this);
    return tmp;
}
Time& Time::operator--() {
    s--;
    set();
    return *this;
}
Time Time::operator--(int)
{
    Time tmp = *this;
    --(*this);
    return tmp;
}
Time& Time::operator+=(const Time& ano) {
    s = s + ano.s;
    m = m + ano.m;
    h = h + ano.h;
    set();
    return *this;
}
Time& Time::operator-=(const Time& ano) {
    s = s - ano.s;
    m = m - ano.m;
    h = h - ano.h;
    set();
    return *this;
}
void Time::set() {
    if (s < 0) { s += 60; m -= 1; }
    else if (s >= 60) { s -= 60; m += 1; }
    if (m < 0) { m += 60; h -= 1; }
    else if (m >= 60) { m -= 60; h += 1; }
    if (h < 0)h += 24;
    else if (h >= 24)h -= 24;
}
ostream& operator<<(ostream& os, const Time& ob)
{
    if (ob.h < 10)os << "0";
        os << ob.h<<":";
    if (ob.m < 10)os << "0";
        os << ob.m<<":";
    if (ob.s < 10)os << "0";
        os  << ob.s;
    return os;
}

istream& operator>>(istream& is, Time& ob)
{
    is >> ob.h >> ob.m >> ob.s;
    return is;
}
int main()
{
    Time time1, time2;
    cin >> time1 >> time2;
    cout << (time1 += (time2++)) << endl;
    cout << (time1 -= time2) << endl;
    cout << (++time2) << endl;
    cout << (time2 += (time1--)) << endl;
    cout << (--time1) << endl;
    cout << (time2 -= time1);
    return 0;
}

