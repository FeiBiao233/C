#include <stdio.h>
#include <string.h>

void removeSpaces(char str[]) 
{
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] != ' ') 
            str[j++] = str[i];
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    printf("请输入一个字符串：");
    gets(str);
    removeSpaces(str);
    printf("移除空格后的字符串为：%s\n", str);
}