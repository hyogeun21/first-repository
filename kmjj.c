#include <stdio.h>
#include <string.h>

int BinToInt(const char* str) {
    int length = strlen(str);
    int result = 0;

    for (int i = 0; i < length; i++) {
        result = result * 2 + (str[i] - '0');
    }

    return result;
}

int main() {
    char binaryString[32];

    while (1) {
        printf("2진수 입력: ");
        scanf("%s", binaryString);

        int decimalResult = BinToInt(binaryString);
        printf("10진수: %d\n\n", decimalResult);
    }
   
}
