#include <stdio.h>

int main()
{
	char arr[][3] = {{'A','B','C'},{'D','E','F'},{'G','H','I'}};
	int temp = 0, i = 0, j = 0, k = 0;
	printf("%ld %ld %ld %ld\n", sizeof(char), (sizeof(arr)/sizeof(char)), (sizeof(arr[0])/sizeof(char)), (sizeof(arr[0][0])/sizeof(char)));
	printf("%ld %ld %ld %ld\n", sizeof(char), sizeof(arr), sizeof(arr[0]), sizeof(arr[0][0]));
	return 0;
}
int func(static int a)
{}
