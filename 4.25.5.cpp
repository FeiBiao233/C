#include <stdio.h>
int max(int a,int b,int c)
{
    return a>(b>c?b:c)?a:(b>c?b:c);
}
    
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    printf("%d",max(x,y,z));
}