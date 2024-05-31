#include <stdio.h>
int main()
{
    int n;
    int fs,l,zs;
    fs=l=zs=0;
    while((scanf("%d",&n))!=EOF)
        if(n<0)
            fs++;
        else if(n==0)
            l++;
        else
            zs++;
    printf("%d %d %d",fs,l,zs);
}