#include<vector>
#include<iostream>
#include<climits>

using namespace std;

bool check(const vector<int> & arr)
{
    int c1 = INT_MAX, c2 = INT_MAX;
    for (int x : arr) {
        if (x <= c1) {   //replace lower
            c1 = x;           
        }
        else if (x <= c2) { //replace mid
            c2 = x;          
        }
        else {              
            return true;     
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for (auto&x : arr)
        cin >> x;
    if (check(arr))cout << "true";
    else cout << "false";
    return 0;
}

