#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    Student arr[3];
    for (size_t i = 0; i < 3; i++)
    {
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
        cin.ignore();
    }
    Student mx;
    mx.marks = INT_MIN;

    for (size_t i = 0; i < 3; i++)
    {
        if (arr[i].marks > mx.marks)
        {
            // cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
            mx = arr[i]; // can not understand
        }
    }
    cout << mx.name << " " << mx.roll << " " << mx.marks << endl;

    return 0;
}
