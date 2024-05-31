#include <stdio.h>
#include <string.h>

void removeSpaces(char str[]) 
{
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] != ' ') 
            str[j++] = str[i];
        else if(str[i+1]!=' ')
                str[j++] = str[i];
    }
    str[j] = '\0';
}

int main()
{
    char a[80];
    gets(a);
    removeSpaces(a);
    puts(a);
}