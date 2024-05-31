#include <iostream>
using namespace std;
int swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int n;
    int a[10000];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        int min=9999,index=0;
        for(int j=i;j<=n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                index=j;
            }
        }
        swap(a[i],a[index]);
    }
    for(int i=1;i<=n;i++)
        cout<<a[i]<<endl;
}