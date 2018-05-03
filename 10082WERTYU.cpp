#include <iostream>
#include <cstdio>
using namespace std;
char s[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main()
{
    int c,i;
    while((c=getchar())!=EOF)
    {
        for(i=1;s[i]&&s[i]!=c;i++);
            if(s[i])putchar(s[i-1]);
    else putchar(c);
    }
    return 0;
}
