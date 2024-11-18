#include <stdarg.h>
#include <stdio.h>

int	sum(int c, ...)
{
	int		s;
	va_list	ap;

	s = 0;
	va_start(ap, c);
	while (c)
	{
		s += va_arg(ap, int);
		c--;
	}
	va_end(ap);
	return (s);
}
int	main(void)
{
	printf("the sum of (12, 32, 2, 45, 55, 6) is : %d\n", sum(6, 12, 32, 2, 45,
			55, 6));
}

// I'm going to write a function that calculates the sum of
// the multiplication of b numbers by a.
void	foo(int a, int b, ...)
{
	int		result;
	va_list	args;

	result = 0;
	va_start(args, b);
		// told it to start from the params after b ie..shift after b
	while (b--)        // because b is the number of params...
	{
		result += va_arg(args, int) * a;
			// va_arg represents the next argument and int is the type.
	}
	printf("%d\n", result);
	va_end(args); // this cleans up the memory that va_list used.
}
int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 3;
	foo(a, b, 1, 2, 4);
	return (0);
}
