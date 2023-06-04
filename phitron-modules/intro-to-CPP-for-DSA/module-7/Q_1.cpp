// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int roll;
//     int marks;

//     Student(string name, int roll, int marks) : name(name), roll(roll), marks(marks) {}

//     bool operator<(const Student &other) const
//     {
//         if (marks != other.marks)
//         {
//             return marks > other.marks;
//         }
//         else
//         {
//             return roll < other.roll;
//         }
//     }
// };

// int main()
// {
//     int n;
//     cin >> n;
//     vector<Student> students;
//     for (int i = 0; i < n; i++)
//     {
//         string name;
//         int roll, marks;
//         cin >> name >> roll >> marks;
//         students.push_back(Student(name, roll, marks));
//     }

//     sort(students.begin(), students.end());

//     for (auto student : students)
//     {
//         cout << student.name << " " << student.roll << " " << student.marks << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// class Student
// {
// public:
//      string name;
//     int roll;
//     int marks;

//     Student(const  string &n, int r, int m) : name(n), roll(r), marks(m) {}
// };

// // Custom comparison function for sorting
// bool compareStudents(const Student &s1, const Student &s2)
// {
//     if (s1.marks != s2.marks)
//         return s1.marks > s2.marks; // Sort by marks in descending order
//     else
//         return s1.roll < s2.roll; // Sort by roll in ascending order
// }

// int main()
// {
//     int N;
//      cin >> N;

//      vector<Student> students;

//     // Read student data
//     for (int i = 0; i < N; i++)
//     {
//          string name;
//         int roll, marks;
//          cin >> name >> roll >> marks;
//         students.emplace_back(name, roll, marks);
//     }

//     // Sort the student data using the custom comparison function
//      sort(students.begin(), students.end(), compareStudents);

//     // Print the sorted student data
//     for (const auto &student : students)
//     {
//          cout << student.name << " " << student.roll << " " << student.marks <<  endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int roll;
//     int marks;

//     Student(const string &name, int roll, int marks) : name(name), roll(roll), marks(marks) {}
// };

// bool compareStudents(const Student &student1, const Student &student2)
// {
//     if (student1.marks != student2.marks)
//     {
//         return student1.marks > student2.marks;
//     }
//     else
//     {
//         return student1.roll < student2.roll;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;

//     vector<Student> students;
//     for (int i = 0; i < n; i++)
//     {
//         string name;
//         int roll, marks;
//         cin >> name >> roll >> marks;
//         students.push_back(Student(name, roll, marks));
//     }

//     sort(students.begin(), students.end(), compareStudents);

//     for (const auto &student : students)
//     {
//         cout << student.name << " " << student.roll << " " << student.marks << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(const string &name, int roll, int marks) : name(name), roll(roll), marks(marks){};
};
// bool comStudents(const Student &student, const Student &others)
// {
//     if (student.marks != others.marks)
//     {
//         return student.marks > others.marks;
//     }
//     else
//     {
//         return student.roll < others.roll;
//     }
// }
bool comStudents(const Student &student, const Student &others)
{
    if (student.marks != others.marks)
    {
        int is = student.marks > others.marks;
        // cout << "marks: " << is << endl;
        return is;
    }
    else
    {
        int is = student.roll < others.roll;
        // cout << "roll: " << is << endl;
        return is;
    }
}
int main()
{
    int n;
    cin >> n;

    vector<Student> students;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        students.push_back(Student(name, roll, marks));
    }
    cout << endl;
    sort(students.begin(), students.end(), comStudents);

    for (const auto &student : students)
    {
        cout << student.name << " " << student.roll << " " << student.marks << endl;
    }

    return 0;
}
