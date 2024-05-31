#include <stdio.h>
#include <string.h>
void CharSwitch(char *str)
{
    while(*str!='\0')
    {
        if(*str>=65&&*str<=90)
            *str=*str+32;
        str++;
    }
}
int main()
{
    char str[100];
    gets(str);
    CharSwitch(str);
    puts(str);
}