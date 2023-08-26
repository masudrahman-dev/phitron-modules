#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{
    int N, M;
    std::cin >> N >> M;

    std::vector<long long> prices(N);
    for (int i = 0; i < N; ++i)
    {
        std::cin >> prices[i];
    }

    // Sort prices in descending order to maximize coupon usage on expensive items.
    std::sort(prices.rbegin(), prices.rend());

    long long totalCost = 0;

    for (int i = 0; i < N; ++i)
    {
        int remainingCoupons = M - i;
        long long discountedPrice = (1LL << std::min(remainingCoupons, 30)) * prices[i];
        totalCost += discountedPrice;
    }

    std::cout << totalCost << std::endl;

    return 0;
}
