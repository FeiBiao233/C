#include <stdio.h>
#include <string.h>
void func(char *p)
{
     while(*p!='\0')
    {
        if(*p==*(p+1))
            strcpy(p,p+1);
        else
            p++;
    }
}
int main()
{
    char str[100];
    gets(str);
    char *p=str;
    func(str);
    puts(str);
}