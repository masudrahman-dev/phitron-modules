// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     int sum = a + b;
//     int multi = a * b;
//     int sub = a - b;
//     cout << a << " "
//          << "+"
//          << " " << b << " "
//          << "="
//          << " " << sum << endl;
//     cout << a << " "
//          << "*"
//          << " " << b << " "
//          << "="
//          << " " << multi << endl;
//     cout << a << " "
//          << "-"
//          << " " << b << " "
//          << "="
//          << " " << sub << endl;

//     return 0;
// }


#include <iostream>

int main() {
    int X, Y;
    std::cin >> X >> Y;

    int summation = X + Y;
    int multiplication = X * Y;
    int subtraction = X - Y;

    std::cout << X << " + " << Y << " = " << summation << std::endl;
    std::cout << X << " * " << Y << " = " << multiplication << std::endl;
    std::cout << X << " - " << Y << " = " << subtraction << std::endl;

    return 0;
}
