#include <bits/stdc++.h>
using namespace std;



// Structure to represent a student
struct Student
{
    string name;
    int roll;
    int marks;

    Student(string n, int r, int m) : name(n), roll(r), marks(m) {}

    // Custom comparison operator to compare students based on marks and roll
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
    int N;
    cin >> N;

    vector<Student> students;
    int maxMarksIndex = -1; // Index of the student with maximum marks

    for (int i = 0; i < N; ++i)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student student(name, roll, marks);
        students.push_back(student);

        // Update the student with maximum marks
        if (maxMarksIndex == -1 || student < students[maxMarksIndex])
        {
            maxMarksIndex = i;
        }
    }

    int Q;
    cin >> Q;

    while (Q--)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student student(name, roll, marks);
            students.push_back(student);

            // Update the student with maximum marks
            if (maxMarksIndex == -1 || student < students[maxMarksIndex])
            {
                maxMarksIndex = students.size() - 1;
            }

            cout << students[maxMarksIndex].name << " " << students[maxMarksIndex].roll << " " << students[maxMarksIndex].marks << endl;
        }
        else if (command == 1)
        {
            if (maxMarksIndex == -1)
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << students[maxMarksIndex].name << " " << students[maxMarksIndex].roll << " " << students[maxMarksIndex].marks << endl;
            }
        }
        else if (command == 2)
        {
            if (!students.empty() && maxMarksIndex != -1)
            {
                // Find and erase the student with maximum marks
                students.erase(students.begin() + maxMarksIndex);

                // Recalculate the student with maximum marks
                maxMarksIndex = -1;
                for (int i = 0; i < students.size(); ++i)
                {
                    if (maxMarksIndex == -1 || students[i] < students[maxMarksIndex])
                    {
                        maxMarksIndex = i;
                    }
                }

                if (maxMarksIndex != -1)
                {
                    cout << students[maxMarksIndex].name << " " << students[maxMarksIndex].roll << " " << students[maxMarksIndex].marks << endl;
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
