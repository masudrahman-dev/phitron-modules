#include <iostream>
#include <string>

bool isLuckyTicket(const std::string &ticket)
{
    int sumFirstHalf = 0;
    int sumSecondHalf = 0;

    for (int i = 0; i < 3; i++)
    {
        sumFirstHalf += ticket[i] - '0';
        sumSecondHalf += ticket[i + 3] - '0';
        int inx = 3 + i;
        // std::cout << ticket[inx] << std::endl;
    }

    return sumFirstHalf == sumSecondHalf;
}

int main()
{
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        std::string ticket;
        std::cin >> ticket;

        if (isLuckyTicket(ticket))
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
