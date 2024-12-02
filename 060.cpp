#include <stdio.h>

int main()
{
    int x;

    scanf_s("%d", &x);
    if ((x & (1 << 2)) == 0) {
        printf("%d의 3번째 비트는 0입니다.", x);
    }
    else if ((x & (1 << 2)) == 4) {
        printf("%d의 3번째 비트는 1입니다.", x);
    }
    printf("\n");
}