#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int c,q=1;
    while((c=getchar())!=EOF)
    {
        if(c=='"'){printf("%s",q?"``":"''");q=!q;}//������������Ƿ����
        else printf("%c",c);
    }
    return 0;
}
