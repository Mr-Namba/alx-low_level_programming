#include <stdio.h>
/**
 * main - printing sizes of data types
 *
 * Return: always 0 (success)
 */
int main(void)
{
	printf("Size of a char:%ld\n", sizeof(char));
	printf("Size of an int:%ld\n", sizeof(int));
	printf("Size of a long int:%ld\n", sizeof(long int));
	printf("Size of a long long int:%ld\n", sizeof(long long int));
	printf("Size of a float:%ld\n", sizeof(float));
	return (0);
}
