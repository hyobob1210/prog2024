﻿#include <stdio.h>

int main()
{
    int n;
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            printf(" ");                         
        }
        for (int k = 1; k <= i * 2 - 1; k++) {
            printf("*");

        }
        printf("\n");

        
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2*(n-i)-1; k++) {
            printf("*");

        }
        printf("\n");


    }
}