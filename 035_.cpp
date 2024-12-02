#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    printf("입력: ");
    gets_s(str1);

    strcpy(str2, str1);

    printf("%s\n", str2);
}
