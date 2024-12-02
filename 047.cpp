#include <stdio.h>

long long fact(long long n)
{
    if (n == 1)
        return 1;
    return fact(n - 1) * n;
}

int main()
{
    printf("%d\n", sizeof(long long));
    
    // 반복문 사용
    long long f = 1;
    for (int i = 1; i <= 20; i++) {
        f = 1;
        for (int j = 1; j <= i; j++)
            f *= j;

        printf("%d! = %lld\n", i, fact(i));
    }
    // 재귀함수 사용
    for (int i = 1; i <= 20; i++)
        printf("%d! = %lld\n", i, fact(i));
}
