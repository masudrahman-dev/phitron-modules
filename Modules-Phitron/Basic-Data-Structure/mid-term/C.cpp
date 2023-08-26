#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>

bool isPermutation(const std::string &s)
{
    std::unordered_set<char> seen;
    for (char c : s)
    {
        if (c >= '0' && c <= '9')
        {
            if (seen.count(c) > 0)
            {
                return false; // Duplicate digit found
            }
            seen.insert(c);
        }
    }
    return seen.size() == 10; // Check if all digits 0-9 are seen exactly once
}

int main()
{
    int x;
    std::cin >> x;

    for (int y = 0; y <= 100; ++y)
    {
        long long square = (x + y) * (x + y);
        long long cube = square * (x + y);

        std::string concatenated = std::to_string(square) + std::to_string(cube);

        // Check if the concatenated string meets the requirements
        if (concatenated.length() == 10 && isPermutation(concatenated))
        {
            std::cout << y << std::endl;
            break; // Exit the loop when a valid y is found
        }
    }

    return 0;
}
