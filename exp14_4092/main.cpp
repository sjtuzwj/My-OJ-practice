
#include<iostream>
#include<cstring>
using namespace std;
class matrix
{
    friend ostream& operator<<(ostream&, matrix &);
    friend istream& operator>>(istream&, matrix &);
private:
    double **arr = nullptr;
    int r;
    int c;
    bool errorbit = false;//!!!对象的意义就是额外携带信息
public:
    /*  matrix(const matrix& ano) :r(ano.r), c(ano.c) {
    arr = new int*[r];
    for (int i = 0; i < r;i++)arr[i] = new int[c];
    for (int i = 0; i < r; i++)
    {
    for (int j = 0; j < c; j++)
    {
    arr[i][j] = ano.arr[i][j];
    }
    }
    }*/
    ~matrix() {
        for (int i = 0; i < r; i++)delete[]arr[i];
        delete[]arr;
    }
    matrix(int row, int col) :r(row), c(col) {
        arr = new double*[r];
        for (int i = 0; i < r; i++)arr[i] = new double[c];
    }
    matrix() = default;
    double operator()(int i, int j) { return arr[i][j]; }
    matrix& operator=(const matrix&ano);
    /* matrix operator+(const matrix&ano)const;
    matrix operator*(const matrix&ano)const;*/
    matrix& operator+=(const matrix&ano);
    matrix& operator*=(const matrix&ano);
};
matrix& matrix::operator=(const matrix&ano)
{
    for (int i = 0; i < r; i++)delete[]arr[i];
    delete[]arr;
    r = ano.r;
    c = ano.c;
    arr = new double*[r];
    for (int i = 0; i < r; i++)
    {
        arr[i] = new double[c];
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = ano.arr[i][j];
        }
    }
    return *this;
}
/*matrix matrix::operator+(const matrix&ano)const
{
if (r != ano.r || c != ano.c) {
cout << "ERROR!"<<endl; return matrix();
}
matrix tmp(*this);
for (int i = 0; i < r; i++)
{
for (int j = 0; j < c; j++)
{
tmp.arr[i][j] += ano.arr[i][j];
}
}
return tmp;
}*/
/*matrix matrix::operator*(const matrix&ano)const
{
if (c != ano.r) {
cout << "ERROR!"<<endl; return matrix();
}
matrix ans(r,ano.c);
for (int i = 0; i != r; ++i)
for (int j = 0; j != ano.c; ++j)
for (int k = 0; k != c; ++k)
ans.arr[i][j] += arr[i][k] * ano.arr[k][j];
return ans;
}*/
matrix& matrix::operator+=(const matrix&ano)
{
    if (r != ano.r || c != ano.c) {
        cout << "ERROR!" << "\n"; errorbit = true; return *this;
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] += ano.arr[i][j];
        }
    }
    return *this;
}
matrix& matrix::operator*=(const matrix&ano)
{
    if (c != ano.r) {
        cout << "ERROR!" << "\n"; errorbit = true; return *this;
    }
    double **ans = new double*[r];
    for (int i = 0; i < r; i++)
        ans[i] = new double[ano.c];
    for (int i = 0; i != r; ++i)
        memset(ans[i], 0, sizeof(double)*ano.c);
    for (int i = 0; i != r; ++i)
        for (int j = 0; j != ano.c; ++j)
            for (int k = 0; k != c; ++k)
                ans[i][j] += arr[i][k] * ano.arr[k][j];
    for (int i = 0; i < r; i++)delete[]arr[i];
    delete[]arr;
    arr = ans;
    ans = nullptr;
    c = ano.c;
    return *this;
}
ostream& operator<<(ostream&os, matrix & ma)
{
    if (ma.errorbit) {
        ma.errorbit =false; return os;
    }
    for (int i = 0; i<ma.r; i++)
    {
        for (int j = 0; j<ma.c; j++)
            cout << ma.arr[i][j] << " ";
        cout << endl;
    }
    return os;
}
istream& operator>>(istream&is, matrix &ma)
{
    for (int i = 0; i<ma.r; i++)
        for (int j = 0; j<ma.c; j++)
            is >> ma.arr[i][j];
    return is;
}
int main()
{
    int r1, c1, r2, c2;
    cin >> r1 >> c1;
    matrix t1(r1, c1);
    cin >> t1;
    cin >> r2 >> c2;
    matrix t2(r2, c2);
    cin >> t2;
    cout << t1(r1 / 2, c1 / 2) << "\n\n";
    cout << (t1 *= t2) << "\n";
    cout << (t1 += t2) << "\n";
    cout << (t1 = t2);
    return 0;
}