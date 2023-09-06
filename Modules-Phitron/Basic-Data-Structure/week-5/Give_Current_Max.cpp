#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int roll;
    int marks;

    Student(string n, int r, int m)
    {
        this->marks = m;
        this->name = n;
        this->roll = r;
    }

    bool operator<(const Student &other) const
    {
        if (marks != other.marks)
        {
            return marks > other.marks;
        }
        return roll < other.roll;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<Student> students;
    int maxMarksInx = -1; 

    for (int i = 0; i < n; ++i)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student student(name, roll, marks);
        students.push_back(student);

        if (maxMarksInx == -1 || student < students[maxMarksInx])
        {
            maxMarksInx = i;
        }
    }

    int q;
    cin >> q;

    while (q--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student student(name, roll, marks);
            students.push_back(student);


            if (maxMarksInx == -1 || student < students[maxMarksInx])
            {
                maxMarksInx = students.size() - 1;
            }

            cout << students[maxMarksInx].name << " " << students[maxMarksInx].roll << " " << students[maxMarksInx].marks << endl;
        }
        else if (cmd == 1)
        {
            if (maxMarksInx == -1)
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << students[maxMarksInx].name << " " << students[maxMarksInx].roll << " " << students[maxMarksInx].marks << endl;
            }
        }
        else if (cmd == 2)
        {
            if (!students.empty() && maxMarksInx != -1)
            {
            
                students.erase(students.begin() + maxMarksInx);

                maxMarksInx = -1;
                for (int i = 0; i < students.size(); ++i)
                {
                    if (maxMarksInx == -1 || students[i] < students[maxMarksInx])
                    {
                        maxMarksInx = i;
                    }
                }

                if (maxMarksInx != -1)
                {
                    cout << students[maxMarksInx].name << " " << students[maxMarksInx].roll << " " << students[maxMarksInx].marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
