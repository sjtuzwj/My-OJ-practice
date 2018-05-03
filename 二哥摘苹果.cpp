#include<iostream>
using namespace std;
int main()
{

    int manheight,deskheight,num,totalheight;
    cin>>manheight>>deskheight>>num;
    totalheight=manheight+deskheight;
    int apple;
    int i=0;
    int m=0;
    while(i<num)
    {
    cin>>apple;
    i++;
    if(apple-totalheight<=0)
        m++;
    }
    cout<<m;
    return 0;
}

