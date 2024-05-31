#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=10-2*i;k++)
            printf(" ");
        for(int j=i;j<=2*i-1;j++)
            printf("%d ",j);
        for(int j=2*i-2;j>=i;j--)
            printf("%d ",j);
        printf("\n");
    }
}