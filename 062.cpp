#include <stdio.h>
int main() {
    int x;

    printf("정수 입력 : ");
    scanf_s("%d", &x);

    for (int i = 1; i <= 4; i++) {
        int n = 1;
        printf("%d배 곱한 값 : %d\n", n << i, x << i);
    }
}