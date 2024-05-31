#include <stdio.h>
int main()
{
    char c,c1;
    scanf("%c",&c);
    getchar();
    switch(c)
    {
        case 'M':
            printf("Monday");
            break;
        case 'W':
            printf("Wednesday");
            break;
        case 'F':
            printf("Friday");
            break;
        case 'T':
          scanf("%c",&c1);
          switch(c1)
          {
            case 'u':
                printf("Tuesday");
                break;
            case 'h':
                printf("Thursday");
                break;
          }
        case 'S':
          scanf("%c",&c1);
          switch(c1)
          {
            case 'a':
                printf("Saturday");
                break;
            case 'u':
                printf("Sunday");
                break;
          }  
    }
}