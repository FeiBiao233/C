#include <stdio.h>
#include <string.h>
void func(char *p,char ch)
{
    while(*p!='\0')
    {
        if(*p==ch)
            strcpy(p,p+1);
        else
            p++;
    }
}
int main()
{
    char str[100],ch;
    gets(str);
    scanf("%c",&ch);
    func(str,ch);
    puts(str);
}