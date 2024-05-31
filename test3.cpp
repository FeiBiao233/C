#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    FILE *inputFile, *outputFile;

    // 写入二进制文件
    outputFile = fopen("output.bin", "wb");
    if (outputFile == NULL) {
        printf("无法打开输出文件。\n");
        return 1;
    }

    fwrite(numbers, sizeof(int), 5, outputFile);
    fclose(outputFile);

    // 读取二进制文件
    int readNumbers[5];
    inputFile = fopen("output.bin", "rb");
    if (inputFile == NULL) {
        printf("无法打开输入文件。\n");
        return 1;
    }

    fread(readNumbers, sizeof(int), 5, inputFile);
    fclose(inputFile);

    // 输出读取的数组
    printf("读取的数组：");
    for (int i = 0; i < 5; i++) {
        printf("%d ", readNumbers[i]);
    }
    printf("\n");

    return 0;
}
