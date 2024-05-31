#include <stdio.h>
#include <math.h>
float swap(float &x,float &y)
{
    float temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int n;
    float a[100];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%f",&a[i]);
    for(int i=1;i<=n;i++)
    {
        int min=10000,index=0;
        for(int j=i;j<=n;j++)
        {
            if(min>fabs(a[j]))
            {
                min=fabs(a[j]);
                index=j;
            }
        }
        swap(a[i],a[index]);
    }
    for(int i=1;i<=n;i++)
        printf("%f ",a[i]);
}
