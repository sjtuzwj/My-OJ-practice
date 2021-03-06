#include<iostream>

using namespace std;
bool isleap(int year)noexcept
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)return true;
    else return false;
}
int monthday(int month, int year)noexcept
{
    switch (month)
    {
    case 2: return isleap(year) ? 29 : 28;
    case 4:
    case 6:
    case 9:
    case 11:return 30;
    default:return 31;
    }
}
int main()
{
    char str[9];
    int n;
    cin >> str >> n;
    for (int i = 0; i < 8; i++)
        str[i] -= '0';
    int year = str[0] * 1000 + str[1] * 100 + str[2] * 10 + str[3];
    int mon = str[4] * 10 + str[5];
    int day = str[6] * 10 + str[7];
    for (int i = 0; i != n; i++)
    {
        if (day == monthday(mon, year))
        {
            day = 1;
            mon++;
        }
        else day++;
        if (mon == 13)
        {
            mon = 1;
            year++;
        }
    }
    if (year > 9999)cout << "out of limitation!";
    else {
        str[0] = year / 1000;
        str[1] = (year-str[0]*1000)/100;
        str[2] = (year-str[0] * 1000-str[1]*100) / 10;
        str[3] = year % 10;
        str[5] = mon % 10;
        str[4] = (mon - str[5])/10;
        str[7] = day % 10;
        str[6]=  (day - str[7])/10;
        for (int i = 0; i != 8; i++)
            str[i] += '0';
        cout << str;
    }
    return 0;
}

