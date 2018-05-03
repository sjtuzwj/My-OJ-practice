#include<iostream>
#include"Complex.h"
using namespace std;
int main()
{
    Complex z1;
    Complex z2;
  cin >> z1 >> z2;
  cout << z1 + z2 <<endl;
  cout << z1 - z2 <<endl;
  cout << z1 * z2 <<endl;
  cout << z1 / z2 <<endl;
  cout << (z1 += z2) <<endl;
  cout << (z1 -= z2) <<endl;
  cout << (z1 *= z2) <<endl;
  cout << (z1 /= z2) <<endl;
  return 0;
}
