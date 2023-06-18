// #include <bits/stdc++.h>
// using namespace std;
// class Student
// {
// public:
//     string nm;
//     int cls;
//     char s;
//     int id;

//     Student(const string &nm, int cls, char s, int id)
//     {
//         this->nm = nm;
//         this->cls = cls;
//         this->s = s;
//         this->id = id;
//     }
// };

// int main()
// {
//     int n;
//     cin >> n;
//     vector<Student> students;

//     for (int i = 0; i < n; i++)
//     {
//         string nm;
//         int cls;
//         char s;
//         int id;

//         cin >> nm >> cls >> s >> id;
//         // students.push_back(Student(nm, cls, s, id));
//         students.emplace_back(Student(nm, cls, s, id));
//     }
//     // cout << endl;
//     // reverse(students.begin(), students.end());
//     for (int i = 0; i < n / 2; i++)
//     {
//         swap(students[i].Student.id, students[n - 1 - i].Student.id);
//     }
//     for (auto &student : students)
//     {
//         cout << student.nm << " " << student.cls << " " << student.s << " " << student.id << "\n";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<pair<string, pair<int, int>>> students;
//     for (int i = 0; i < n; i++)
//     {
//         string nm;
//         int cls, id;
//         char s;
//         cin >> nm >> cls >> s >> id;
//         students.push_back({nm, {cls, id}});
//     }

//     for (int i = 0; i < n / 2; i++)
//     {
//         swap(students[i].second.second, students[n - 1 - i].second.second);
//     }

//     for (auto student : students)
//     {
//         cout << student.first << " " << student.second.first << " " << student.second.second << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>

// struct Student
// {
//     std::string name;
//     std::string cls;
//     std::string section;
//     std::string id;
// };

// int main()
// {
//     int N;
//     std::cin >> N;

//     std::vector<Student> students(N);

//     for (int i = 0; i < N; ++i)
//     {
//         std::cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
//     }

//     std::reverse(students.begin(), students.end());

//     for (const auto &student : students)
//     {
//         std::cout << student.name << " " << student.cls << " " << student.section << " " << student.id << "\n";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string nm[100];
    int cls[100];
    char s[100];
    int id[100];
    for (int i = 0; i < n; i++)
    {
        cin >> nm[i] >> cls[i] >> s[i] >> id[i];
    }
    int divide = n / 2;
    for (int i = 0; i < divide; i++)
    {
        swap(id[i], id[n - i - 1]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << nm[i] << " " << cls[i] << " " << s[i] << " " << id[i] << endl;
    }

    return 0;
}
