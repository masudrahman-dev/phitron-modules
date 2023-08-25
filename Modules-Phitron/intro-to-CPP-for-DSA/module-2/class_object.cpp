#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    char name[100];
    int roll;
    int cls;
    char section;
};

int main()
{

    Student rahim;
    rahim.cls = 9;
    rahim.section = 'A';
    char nm[100] = "Rahim Uddin";
    strcpy(rahim.name, nm);

    Student Karim;
    Karim.cls = 7;
    Karim.section = 'C';
    char nmm[100] = "Karim Uddin";
    strcpy(Karim.name, nmm);

    cout << rahim.cls;
    return 0;
}
