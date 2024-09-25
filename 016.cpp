#include <stdio.h>
int main() {

    float F = 100.0;

    printf(" 화씨      섭씨\n");
    printf("=============\n");


    for (int i = 0; i <= 10; i++) {
        printf("%5.1f\t%5.1f\n", F, (F - 32) * 5 / 9);
        F -= 10.0;
    }
}