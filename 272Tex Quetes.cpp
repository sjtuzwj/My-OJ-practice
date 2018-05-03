#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int c,q=1;
    while((c=getchar())!=EOF)
    {
        if(c=='"'){printf("%s",q?"``":"''");q=!q;}//标记左右引号是否存在
        else printf("%c",c);
    }
    return 0;
}
