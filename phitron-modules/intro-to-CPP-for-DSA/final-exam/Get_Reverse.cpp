#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int math_marks;
    int eng_mark;
    Student(const string &nm, int cls, char s, int math_marks, int eng_mark)
    {
        this->nm = nm;
        this->cls = cls;
        this->s = s;
        this->math_marks = math_marks;
        this->eng_mark = eng_mark;
    }
};

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
        int math_marks;
        int eng_mark;
        cin >> nm >> cls >> s >> math_marks >> eng_mark;
        students.push_back(Student(nm, cls, s, math_marks, eng_mark));
    }
    // cout << endl;

    reverse(students.begin(), students.end());
    for (auto &student : students)
    {
        cout << student.nm << " " << student.cls << " " << student.s << " " << student.math_marks << " " << student.eng_mark << "\n";
    }

    return 0;
}
