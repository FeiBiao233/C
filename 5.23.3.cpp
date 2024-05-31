#include <stdio.h>
#include <math.h>
int n;

int swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int abssort(int *a)
{
    for(int i=0;i<n;i++)
    {
        int min=10000,index=0;
        for(int j=i;j<n;j++)
        {
            if(min>abs(a[j]))
            {
                min=abs(a[j]);
                index=j;
            }
        }
        swap(a[i],a[index]);
    }
}

int main()
{
    int a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
    abssort(a);
    for(int i=0;i<n;i++)
        printf("%d ",*(a+i));
}