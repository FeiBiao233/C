#include <stdio.h>
int check(int x)
{
    int min=9999,a;
    while(x)
    {
        a=x%10;
        if(a<=min)
        {
            min=a;
            x/=10;
        }
        else
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    while((scanf("%d",&n))!=EOF)
    {
        printf("%d\n",check(n));
    }
}