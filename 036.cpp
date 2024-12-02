#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];
    char temp[100];

    // 문자열 입력
    printf("입력: ");
    scanf("%s", str1);
    printf("입력: ");
    scanf("%s", str2);
    printf("입력: ");
    scanf("%s", str3);

    if (strcmp(str1, str2) > 0) {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }
    if (strcmp(str1, str3) > 0) {
        strcpy(temp, str1);
        strcpy(str1, str3);
        strcpy(str3, temp);
    }
    if (strcmp(str2, str3) > 0) {
        strcpy(temp, str2);
        strcpy(str2, str3);
        strcpy(str3, temp);
    }

    printf("사전 순서로 정렬 결과:\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);
}
