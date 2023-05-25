#include <bits/stdc++.h>
using namespace std;

class Fruit
{
public:
    char name[100];
    int kg;
};

int main()
{
    Fruit apple;
    char app_name[100] = "John";
    strcpy(apple.name, app_name);
    apple.kg = 2;
    cout << apple.name << " " << apple.kg;
    return 0;
}
