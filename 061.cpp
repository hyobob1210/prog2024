#include <stdio.h>
int main() {
    // 61.
    int x;

    scanf_s("%d", &x);

    printf("%d의 아래 4자리 : %d \n", x, x & 15);
}