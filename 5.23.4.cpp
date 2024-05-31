#include <stdio.h>
#include <string.h>
int main()
{
    char a[4][80];
    for(int i=0;i<4;i++)
        gets(a[i]);
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<strlen(a[i]);j++)
        {
            if(a[i][j]=='$')
                a[i][j]='S';
        }
    }
    for(int i=0;i<4;i++)
        puts(a[i]);
}