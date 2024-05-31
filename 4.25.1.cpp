#include <stdio.h>
#include <math.h>
int isPrime(int a,int b)
{
    if(a<=b)
    {
        if(a==1)
            return 0;
        if(a==2||a==3)
            return 1;
        for(int i=2;i<=sqrt(a);i++)
        {
            if(a%i==0)
                return 0;
            else   
                return 1;      
        }
    }
    else
        return 0;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",isPrime(x,y));
}