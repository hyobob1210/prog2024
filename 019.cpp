#include <stdio.h>

int main()
{
    int n,sum1 = 0,sum2 = 0;
    
    printf("숫자 입력: ");
    scanf_s("%d", &n);
     
    for (int i = 1; i <= n; i++) {

        if (i % 2 == 0) {
            sum1 += i;
        }
        else {
            sum2 += i;
        }

    }
    printf("1부터 n까지의 짝수의 합: %d\n", sum1);
    printf("1부터 n까지의 홀수의 합: %d\n", sum2);
}
