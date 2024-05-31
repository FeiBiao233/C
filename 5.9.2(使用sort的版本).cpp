#include <bits/stdc++.h>
using namespace std;
int cmp(float x,float y)
{
    return fabs(x)<fabs(y);
}
int main()
{
    int n;
    float a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%f",&a[i]);
    sort(a,a+n,cmp);
     for(int i=0;i<n;i++)
        printf("%f ",a[i]);
}