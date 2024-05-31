#include <stdio.h>
#include <math.h>
int main()
{
    int n,n1,i,flag;
    flag=0;
    scanf("%d",&n);
    n1=n;
    for(i=0;n!=0;i++)
    {
        n/=10;
    }
    //printf("%d",i);
    for(int j=1;j<=i/2;j++)
    {
        if((n1%int(pow(10,j)))/int(pow(10,j-1))!=n1/int(pow(10,i-j))%10)
            flag=1;    
    }
    if(flag==1)
        printf("不是回文数");
    else   
        printf("是回文数");
}