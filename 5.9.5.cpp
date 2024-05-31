#include <stdio.h>
int main()
{
    int x,y;
    int a[20],b[20];
    scanf("%d",&x);
    for(int i=0;i<x;i++)
        scanf("%d",&a[i]);
    scanf("%d",&y);
    for(int i=0;i<y;i++)
        scanf("%d",&b[i]);
    for(int i=0;i<x;i++)
    {
        int flag=0;
        for(int j=0;j<y;j++)
        {
            if(a[i]==b[j])
                flag=1;
        }
        if(flag==0)
            printf("%d ",a[i]);
    }
     for(int i=0;i<y;i++)
    {
        int flag=0;
        for(int j=0;j<x;j++)
        {
            if(b[i]==a[j])
                flag=1;
        }
        if(flag==0)
            printf("%d ",b[i]);
    }
}