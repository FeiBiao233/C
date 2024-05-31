#include <stdio.h>
int main()
{
    //int x,y,z;
    //5 3 1/3
    for(int i=0;i<=20;i++)
    {
        for(int j=0;j<=33;j++)
        {
            for(int k=0;k<=100;k++)
            {
                if((i+j+k==100)&&(5*i+3*j+k/3==100))
                    printf("%d %d %d\n",i,j,k);
            }
        }
    }
}