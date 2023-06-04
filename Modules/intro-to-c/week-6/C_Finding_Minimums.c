#include <stdio.h>

int main()
{
    int N, K, i, j;
    int nums[100000];

    scanf("%d %d", &N, &K);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i <= N - K; i += K)
    {
        int min_val = nums[i];
        for (j = i + 1; j < i + K; j++)
        {
            if (nums[j] < min_val)
            {
                min_val = nums[j];
            }
        }
        printf("%d ", min_val);
    }

    // print minimum value of last group
    if (i < N)
    {
        int min_val = nums[i];
        for (j = i + 1; j < N; j++)
        {
            if (nums[j] < min_val)
            {
                min_val = nums[j];
            }
        }
        printf("%d", min_val);
    }

    return 0;
}

#include <stdio.h>

void find_minimums(int nums[], int N, int K, int start)
{
    if (start >= N)
    {
        return; // base case: no more numbers left
    }

    int i, min_val = nums[start];
    for (i = start + 1; i < start + K && i < N; i++)
    {
        if (nums[i] < min_val)
        {
            min_val = nums[i];
        }
    }
    printf("%d ", min_val);

    // recursive call for next group
    find_minimums(nums, N, K, start + K);
}

int main()
{
    int N, K, i;
    int nums[100000];

    scanf("%d %d", &N, &K);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &nums[i]);
    }

    find_minimums(nums, N, K, 0);

    return 0;
}
