#include <stdio.h>
float p(int n,float x)
{
    if(n==1)
        return x;
    else if(n==0)
        return 1;
    else
        return ((2*n-1)*x*p(n-1,x)-(n-1)*p(n-2,x))/n;
}
int main()
{
    int a;
    float b;
    scanf("%d %f",&a,&b);
    printf("%f",p(a,b));
}