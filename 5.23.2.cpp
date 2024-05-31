#include <stdio.h>
#include <string.h>

int main() {
    char str[20][30];
    int count[20] = {0};  
    int maxCount = 0;     
    int i, j;

    printf("请输入20个字符串：\n");
    for (i = 0; i < 20; i++) 
    {
        gets(str[i]);
        for (j = 0; j <= i; j++) 
        {
            if (strcmp(str[i], str[j]) == 0) 
            {
                count[j]++;
                if (count[j] > maxCount) 
                {
                    maxCount = count[j];
                }
                break;
            }
        }
    }
    printf("\n相同字符串的最大个数为：%d\n", maxCount);
}