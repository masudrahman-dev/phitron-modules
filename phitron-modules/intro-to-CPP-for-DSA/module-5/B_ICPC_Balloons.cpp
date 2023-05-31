#include <iostream>
#include <string>
#include <unordered_map>

int countBalloons(const std::string &solvedProblems)
{
    std::unordered_map<char, int> balloons;

    int totalBalloons = 0;
    for (char problem : solvedProblems)
    {
        balloons[problem]++;
        if (balloons[problem] <= 2)
        {
            totalBalloons++;
        }
    }

    return totalBalloons;
}

int main()
{
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        std::cin >> n;

        std::string solvedProblems;
        std::cin >> solvedProblems;

        int balloons = countBalloons(solvedProblems);
        std::cout << balloons << std::endl;
    }

    return 0;
}
