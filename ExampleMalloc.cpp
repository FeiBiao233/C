#include <stdio.h>
#include <stdlib.h> //malloc需要这个
int main()
{
   int n;
   scanf("%d",&n);
   int *a;
   a=(int*)malloc(n*sizeof(int)); //int* 表示强制转换为int的指针类型，n*sizeof(int)表示切多少内存出来
   a[n-1]=5; //这样就等价与int a[n]了，这一行和下一行的调用方式都可以
   printf("%d",*(a+n-1));
}