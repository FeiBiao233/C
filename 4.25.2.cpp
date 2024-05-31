#include <stdio.h>
#include <math.h>

int digit(int n,int k)
{
    return n/int(pow(10,k-1))%10;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",digit(a,b));
}