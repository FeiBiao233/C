#include <stdio.h>
int main()
{
    int a[5][6];
    int x,y,min=100000;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
            scanf("%d",&a[i][j]);
            if(min>a[i][j])
            {
                min=a[i][j];
                x=i;
                y=j;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
            printf("%3d",a[i][j]);;
        }
        printf("\n");
    }
    printf("%d %d %d",min,x,y);
}