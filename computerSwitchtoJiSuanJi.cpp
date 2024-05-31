#include <stdio.h>
#include <string.h>
int main()
{
    char str[4][100],c[100],temp;
    for(int i=0;i<4;i++)
        while(gets(str[i]),strlen(str[i])<8);
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<=strlen(str[i])-8;j++)
        {
            strcpy(c,*(str+i)+j);
            c[8]='\0';
            temp=str[i][j+8];
            str[i][j+8]='\0';
            if(strcmp(c,"computer")==0)
            {
                strcpy(*(str+i)+j,"计算机");
                str[i][j+8]=temp;
            }
        }
    }
     for(int i=0;i<4;i++)
     {
        printf("%s",str[i]);
     }
}
//这个temp到底是什么用？
//非常奇怪的是，一个汉字占3个字节，所以这道题目必须要用别的方法