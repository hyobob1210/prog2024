#include <stdio.h>
int main()
{
    printf("화씨      섭씨\n");
    printf("============\n");
    printf("%.1f   %.1f\n", 100.0, (100.0 - 32) * 5 / 9);
    printf(" %.1f   %.1f\n", 80.0, (80.0 - 32) * 5 / 9);
    printf(" %.1f   %.1f\n", 60.0, (60.0 - 32) * 5 / 9);
}
