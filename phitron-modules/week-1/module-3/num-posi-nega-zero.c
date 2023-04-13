#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    printf("enter %d any number: \n", num);
    if (num > 0)
    {
        printf("positive\n");
    }
    else if (num == 0)
    {
        printf("zero\n");
    }
    else
    {
        printf("negative\n");
    }

    return 0;
}
