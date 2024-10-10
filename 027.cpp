#include <stdio.h>

int main()
{
	//(1)
	/*int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/


	//(2)
	/*int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= (i * 2) - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}*/
//(3) 
	/*int n;
	scanf_s("%d", &n);
	for (int i = n; i >= 1; i--) {
		for (int j = i; j >= 1; j--) {
			printf("*");
		}
		printf("\n");

	}*/


//(4)
//int n;
//scanf_s("%d", &n);
//for (int i = 1; i <= n; i++) {
//	for (int k = n; k > i; k--) {
//		printf(" ");
//	}
//
//	for (int j = 1; j <= i; j++) {
//		printf("*");
//	}
//	printf("\n");
///

//(5)
/*int n;
scanf_s("%d", &n);
for (int i = 1; i <= n; i++) {
	for (int k = n; k > i; k--) {
		printf(" ");
	}

	for (int j = 1; j <= i*2 - 1; j++) {
		printf("*");
	}
	printf("\n");
}*/
//(6)
	/*int n;
	scanf_s("%d", &n);

	for (int i = n; i > 0; i--) {
		for (int j = n; j > i; j--) {
			printf(" ");

		}
		for (int k = 0; k < i * 2 - 1; k++) {
			printf("*");
		}
		printf("\n");
	}*/
	// or 
	/*int n;
	scanf_s("%d", &n);

	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= n - i; j++) {
			printf("_");
		}for (int k = 1; k <= i * 2 - 1; k++) {
			printf("*");
		}printf("\n");
	}*/

}