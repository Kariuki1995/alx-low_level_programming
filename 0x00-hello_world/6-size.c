include < stdio.h >
/**
 * main - print out data type sizes in C
 *
 * Return: 0
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a int: %lu byte(S)\n", (Unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(S)\n", (Unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(S)\n", (Unsigned long)sizeof(c));
	printf("Size of a char: %lu byte(S)\n", (Unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(S)\n", (Unsigned long)sizeof(f));
	return (0);
}
