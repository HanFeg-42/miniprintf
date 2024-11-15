#include <stdarg.h>
#include <stdio.h>

int sum(int c, ...)
{
    int s = 0;
    va_list ap;
    va_start(ap, c);

    while (c)
    {
        s += va_arg(ap, int);
        c--;
    }
    va_end(ap);
    return s;
}

int main()
{
    printf("the sum of (12, 32, 2, 45, 55, 6) is : %d\n", sum(6, 12, 32, 2, 45, 55, 6));
}