#include <stdio.h>
float height(float n,int m)
{
    float ans,h;
    ans=h=n;
    for(int i=1;i<m;i++)
    {
        h=h/2;
        ans+=2*h;
    }
    return ans;
}

int main()
{
    float n,ans,h;
    int m;
    scanf("%f %d",&n,&m);
    printf("%f",height(n,m));
}