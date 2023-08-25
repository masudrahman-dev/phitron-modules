#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    float height;
    int age;

    Person(const string &personName, float personHeight, int personAge)
    {
        name = personName;
        height = personHeight;
        age = personAge;
        cout << "Name: " << name << endl;
        cout << "Height: " << height << " feet" << endl;
        cout << "Age: " << age << " years" << endl;
    }


};

int main()
{
    Person *person1 = new Person("Masud Rahman", 5.83, 25);

    delete person1;

    return 0;
}
