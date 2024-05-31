#include <stdio.h>
#include <math.h>
int main()
{
    float a[5][6];
    float max=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
            scanf("%f",&a[i][j]);
            if(max<fabs(a[i][j]))
                max=a[i][j];
        }
        for(int j=0;j<6;j++)
        {
            a[i][j]/=max;
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
            printf("%f ",a[i][j]);
        }
        printf("\n");
    }
}