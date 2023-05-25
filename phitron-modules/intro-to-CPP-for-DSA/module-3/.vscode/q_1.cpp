#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string name;
    int roll;
    char section;
    float math_marks;
    int cls;
    Student(const string &n, int r, char s, float m, int c)
    {
        name = n;
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    };
};

int main()
{
    string masud_name = "Masud Rahman";
    string musa_name = "Masud Rahman";
    Student Masud(masud_name, 123, 'A', 57.44, 12);
    Student Musa(musa_name, 123, 'A', 65.44, 12);

    cout << max(Masud.math_marks, Musa.math_marks);
    return 0;
}
