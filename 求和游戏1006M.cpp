# include <iostream>
using namespace std;
int Min(int x, int y) {return x<y ? x:y;}
int Max(int x, int y) {return x>y ? x:y;}
int main()
{
    int n, x;
    int Sum=0, minSum=101;
    int ans=0;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        Sum += x;//i项前缀和
        ans = Max(ans, Sum-minSum);//前缀和-第i-2项最小前缀和=此处最大子列和(长度至少为2)
        minSum = Min(minSum, Sum-x);//第i-2项最小前缀和更新为第i-1项最小前缀和
    }
    if (ans > 0) cout<<ans;
    else cout<<"Game Over";
    return 0;
}
