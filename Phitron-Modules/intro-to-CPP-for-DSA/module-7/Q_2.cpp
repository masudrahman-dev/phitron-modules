// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {

// public:
//     string name;
//     int roll;
//     int marks;
//     Student(const string &name, int roll, int marks) : name(name), roll(roll), marks(marks){};
// };

// int main()
// {
//     int n;
//     cin >> n;
//     vector<Student> students;
//     while (n--)
//     {
//         string name;
//         int roll, marks;
//         cin >> name >> roll >> marks;
//         students.push_back(Student(name, roll, marks));
//     }
//     // cout << endl;

//     reverse(students.begin(), students.end());
//     for (auto &student : students)
//     {
//         cout << student.name << " " << student.roll << " " << student.marks << endl;
//     }

//     return 0;
// }


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Student {
public:
    std::string name;
    int roll;
    int marks;

    Student(const std::string& name, int roll, int marks) : name(name), roll(roll), marks(marks) {}
};

int main() {
    int N;
    std::cin >> N;

    std::vector<Student> students;

    for (int i = 0; i < N; i++) {
        std::string name;
        int roll, marks;
        std::cin >> name >> roll >> marks;
        students.push_back(Student(name, roll, marks));
    }

    std::reverse(students.begin(), students.end());

    for (const auto& student : students) {
        std::cout << student.name << " " << student.roll << " " << student.marks << std::endl;
    }

    return 0;
}
