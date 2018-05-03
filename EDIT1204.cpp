#80分，难受


#include<iostream>
#include<string>
#include<sstream>
using namespace std;

void list(string arr[], int n1, int n2, int n) {
    if (n1<1 || n2<n1 || n2>n)cout << "Error!\n";
    else for (int i = n1-1; i < n2; i++)cout << arr[i];
}
void ins(string arr[], int i, int j, int n, string&str) {
    if (i < 0 || i>=n || j <= 0 || j > arr[i].length())cout << "Error!\n";
    else arr[i].insert(j - 1, str);
}
void del(string arr[], int i, int j, int n, int m) {
    if (i < 0 || i>=n || j <= 0 || j + m>arr[i].length())cout << "Error!\n";
    else arr[i].erase(j - 1, m);
}
int main()
{
    string arr[100];
    int i = 0;
    do {
        getline(cin, arr[i++]);
        arr[i - 1] += '\n';
    } while (arr[i - 1] != "******\n");
    i -= 1;
    string tmp;
    while (true)
    {
        getline(cin, tmp);
        istringstream split(tmp);
        string mes;
        split >> mes;
        if (mes == "list") {
            int n, m;
            split >> n >> m;
            list(arr, n, m, i);
        }
        else if (mes == "ins") {
            int n, m;
            string str;
            split >> n >> m;
            getline(split, str);
            str.erase(0, str.find_first_not_of(" "));
            ins(arr, n - 1, m, i, str);
        }
        else if (mes == "del") {
            int n, m, q;
            split >> n >> m >> q;
            del(arr, n - 1, m, i, q);
        }
        else if (mes == "quit") {
            break;
        }
    }
    for (int j = 0; j < i; j++)
    {
        cout << arr[j];
    }
    return 0;
}


