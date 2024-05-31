#include <stdio.h>
int main()
{
    int n,n1;
    scanf("%d",&n);
    n1=n;
    int ans=-100;
    while(n!=0)
    {
        int m=n%10;
        ans=ans*10+m;
        n/=10;
    }
    if(n1==ans)
        printf("是回文数");
    else
        printf("不是");
}