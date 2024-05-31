#include <stdio.h>

void print(int c[2][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j]++;
            //printf("%d\n",c[i][j]);
        }
    }
            
}

int main()
{
    int a[2][2]={1,2,3,4};
    print(a);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            printf("%d\n",a[i][j]);
    }
}