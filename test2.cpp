#include <stdio.h>

int main()

{

    char a, b, c, x, y, z;

    scanf("%c", &a);

    getchar();

    scanf("%c", &b);

    getchar();

    scanf("%c", &c);

    getchar();

    x = (a < b ? a : b) < c ? (a < b ? a : b) : c;

    z = (a > b ? a : b) > c ? ( a > b ? a : b) : c;

    y = a + b + c - x - z;

    printf("%c    %c     %c\n", x, y, z);

}