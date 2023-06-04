// #include <bits/stdc++.h>
// using namespace std;
// class Student
// {
// public:
//     string nm;
//     int cls;
//     char s;
//     int id;
//     int math_marks;
//     int eng_mark;
//     Student(const string &nm, int cls, char s, int id, int math_marks, int eng_mark)
//     {
//         this->nm = nm;
//         this->cls = cls;
//         this->s = s;
//         this->id = id;
//         this->math_marks = math_marks;
//         this->eng_mark = eng_mark;
//     }
// };
// bool comSort(const Student &student, const Student &others)
// {
//     int totalMarksA = student.math_marks + student.eng_mark;
//     int totalMarksB = others.math_marks + others.eng_mark;

//     if (totalMarksA == totalMarksB)
//     {
//         return student.id < others.id;
//     }

//     return totalMarksA > totalMarksB;
// }
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
//         int math_marks;
//         int eng_mark;
//         cin >> nm >> cls >> s >> id >> math_marks >> eng_mark;
//         students.push_back(Student(nm, cls, s, id, math_marks, eng_mark));
//     }
//     // cout << endl;
//     sort(students.begin(), students.end(), comSort);
//     for (auto &student : students)
//     {
//         cout << student.nm << " " << student.cls << " " << student.s << " " << student.id << student.math_marks << " " << student.eng_mark << "\n";
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_mark;
    Student(const string &nm, int cls, char s, int id, int math_marks, int eng_mark)
    {
        this->nm = nm;
        this->cls = cls;
        this->s = s;
        this->id = id;
        this->math_marks = math_marks;
        this->eng_mark = eng_mark;
    }
};

bool comSort(const Student &a, const Student &b)
{
    int total_a = a.math_marks + a.eng_mark;
    int total_b = b.math_marks + b.eng_mark;

    if (total_a == total_b)
    {
        return a.id < b.id;
    }

    return total_a > total_b;
}

int main()
{
    int n;
    cin >> n;
    vector<Student> students;

    for (int i = 0; i < n; i++)
    {
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_mark;
        cin >> nm >> cls >> s >> id >> math_marks >> eng_mark;
        students.push_back(Student(nm, cls, s, id, math_marks, eng_mark));
    }
    sort(students.begin(), students.end(), comSort);

    for (const auto &student : students)
    {
        cout << student.nm << " " << student.cls << " " << student.s << " " << student.id << " " << student.math_marks << " " << student.eng_mark << endl;
    }

    return 0;
}
