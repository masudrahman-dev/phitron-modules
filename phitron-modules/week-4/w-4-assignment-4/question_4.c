#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Has Return + Parameter
int add(int x, int y)
{
    return x + y;
}

// Has Return + No Parameter
int roll_dice()
{
    return (rand() % 6) + 1;
}

// No Return + Parameter
void print_multiplication_table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

// No Return + No Parameter
void greet()
{
    printf("Hello, world!\n");
}

int main()
{
    int sum = add(3, 4);
    int result = roll_dice();
    print_multiplication_table(5);
    greet();
    return 0;
}
