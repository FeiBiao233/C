#include <stdio.h>

int wanshu(int n)
{
    if(n==1)
        return 1;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            sum+=i;
    }
    if(sum==2*n)
        return 1;
    return 0;
}
int main()
{
    for(int i=1;i<=1000;i++)
    {
        if(wanshu(i))
            printf("%d ",i);
    }
}