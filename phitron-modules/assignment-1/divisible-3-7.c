#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);
    if (0 <= T)
    {
       for (int i = 1; i <= T; i++)
        {

            if (i % 3 == 0 && i % 7 == 0)
            {
                printf("%d\n", i);
            }
        }
    }

    
    return 0;
}
