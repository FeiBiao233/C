#include <stdio.h>
int main()
{
    int hang=0;
    int flag=0;
    for(int i=1;i<=55;i++)
    {
        printf("%d  ",i);
        hang++;
        if(hang>flag)
        {   
            printf("\n");
            hang=0;
            flag++;
        }
    }
}