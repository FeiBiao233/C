#include <stdio.h>
int main()
{
    float h=100;
    float ans=-100;
    for(int i=1;i<=10;i++)
    {
        ans=ans+2*h;
        h/=2;
    }
    printf("%f %f",ans,h);

}