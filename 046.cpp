#include <stdio.h>

int factorial(int n) {
    
     if (n == 1)
         return 1;
     return factorial(n - 1) * n;
    
}

int main()
{
    int n;
    printf("n을 입력 : ");
    scanf_s("%d", &n);

    printf("재귀함수 : %d\n", factorial(n));

    int p = 1;
    for (int i = 1; i <= n; i++) {
        p *= i;
        
    }
    printf("반복문 : %d\n", p);

    

}
