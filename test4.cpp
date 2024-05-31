#include<stdio.h>

#include<stdlib.h>

struct person

{

char name[9];

int tel;

};

int main()

{

struct person *p,temp;

int n,i,j,k;

scanf("%d",&n);

p=(struct person*) malloc(n*sizeof(struct person));

    for(i=0;i<n;i++)

scanf("%s%d",&p[i].name,&p[i].tel);

for(i=0;i<n-1;i++)

{

k=i;

for(j=i+1;j<n;j++)

if(p[j].tel<p[k].tel)

k=j;

temp=p[i];

p[i]=p[k];

p[k]=temp;

}

for(i=0;i<n;i++)

printf("%s  %d\n",p[i].name,p[i].tel);

}