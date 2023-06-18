#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int id;

    Person(const string &personName, int personAge, int personId)
    {
        name = personName;
        age = personAge;
        id = personId;
        cout << "person details: " << name << " " << personAge << " " << id << endl;
    }
};

int main()
{

    Person person1("John", 25, 2341);

    return 0;
}
