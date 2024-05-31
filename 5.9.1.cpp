#include <stdio.h>
#include <math.h>
int main()
{
    int a[100];
    int n;
    float x,sum=0;
    scanf("%d %f",&n,&x);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i]*pow(x,i);
    }
    printf("%f",sum);

}