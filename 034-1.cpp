#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("문자열을 입력하세요: ");
    gets_s(str);

    printf("%s - %d글자\n", str, strlen(str));
}
