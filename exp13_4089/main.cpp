#include<iostream>
#include<vector>
using namespace std;
class Joseph {
private:
    int num;
    int dif;
    vector<int>arr;
public:
    Joseph(int n, int m) :num(n), dif(m), arr(vector<int>(num)) {
        for (int i=1;i<=num;i++)
            arr[i-1] = i;
    }
    void simulate();
};
void Joseph::simulate() {
    int beg = 0;
    for (int i = 0; i != num; i++)
    {
        beg = (beg + dif) % arr.size();
        cout << arr[beg]<<" ";
        arr.erase(arr.begin()+beg--);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    Joseph obj(n, m);
    obj.simulate();
    return 0;
}

