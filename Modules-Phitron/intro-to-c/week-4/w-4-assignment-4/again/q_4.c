#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int has_return_with_parameter(int a, int b)
{
    int sum = a + b;
    return sum;
}
int has_return_no_parameter()
{
    int sum = 3 + 5;
    return sum;
}
void no_return_has_parameter(int a, int b)
{
    int sum = a + b;
    printf("%d\n", sum);
}
void no_return_no_parameter(void)
{
    int sum = 5 + 1;
    printf("%d\n", sum);
}

int main()
{
    printf("%d\n", has_return_with_parameter(3, 5));
    printf("%d\n", has_return_no_parameter());
    no_return_has_parameter(3, 6);
    no_return_no_parameter();
    return 0;
}
