#include<stdio.h>
/*
 *Int main-prints the size of various types
 *Return:0 if exited properly
 */
int main(void)
{
	printf("Size of char: %ld bytes\n", sizeof(char));
    printf("Size of short: %ld bytes\n", sizeof(short));
    printf("Size of int: %ld bytes\n", sizeof(int));
    printf("Size of long: %ld bytes\n", sizeof(long));
    printf("Size of long long: %ld bytes\n", sizeof(long long));
    printf("Size of float: %ld bytes\n", sizeof(float));
    printf("Size of double: %ld bytes\n", sizeof(double));
    printf("Size of long double: %ld bytes\n", sizeof(long double));
}
