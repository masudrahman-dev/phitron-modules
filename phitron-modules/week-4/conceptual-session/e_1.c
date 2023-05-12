#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(int n)
{
    int last_digit = n % 10;

    // Get the first digit of the number
    int first_digit = n;
    while (first_digit >= 10)
    {
        printf("%d\n", first_digit);
        first_digit /= 10;
    }

    int total = last_digit + first_digit;
    return total;
}
int main()
{
    int n = 1234;
    // scanf("%d", &n);
    int add = sum(n);
    printf("%d\n", add);
    return 0;
}
