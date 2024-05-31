#include <stdio.h>

float cal(int n)
{
    float ans=0;
    if(n%2==0)
    {
        for(int i=2;i<=n;i+=2)
            ans+=1/float(i);
    }
    else
    {
        for(int i=1;i<=n;i+=2)
            ans+=1/float(i);
    }
    return ans;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%f",cal(n));
}