#include <stdio.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int m=gcd(x,y);
    printf("%d %d",m,x*y/m);
}