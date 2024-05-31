#include <stdio.h>

#include <math.h>

int main()

{

    float x;

    scanf("%f",&x);

    if(x>=0&&x<=1)

        printf("%f",x+cos(x));

    else

        printf("%f",x+sin(x));

}