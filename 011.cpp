#include <stdio.h>
int main()
{
	int x = 3, y = 4;
	printf("x && y = %d\n", bool(x && y));
	printf("x || y = %d\n",  bool(x || y));
	printf("!x = %d\n", bool(!x));
	printf("!y = %d\n", bool(!y));



}