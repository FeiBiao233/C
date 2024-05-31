#include <stdio.h>
#include <string.h>
struct tele
{
    char name[20];
    char pho[20];
}arr[100];
void swap(tele &x,tele &y)
{
    tele temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%s %s",arr[i].name,arr[i].pho);
     for(int i=0;i<n;i++)
     {
         char min[20]="99999999999";
         int index=0;
         for(int j=i;j<n;j++)
         {
             if(strcmp(arr[j].pho,min)==-1)
             {
                 strcpy(min,arr[j].pho);
                 index=j;
             }
         }
         swap(arr[i],arr[index]);
     }
     for(int i=0;i<n;i++)
        printf("%s %s\n",arr[i].name,arr[i].pho);
}