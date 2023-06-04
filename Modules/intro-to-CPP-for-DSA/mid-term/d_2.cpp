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
        }
};

int main()
{
    Person *person1 = new Person("Masud Rahman", 5.83, 25);
    Person *person2 = new Person("Musa Pathan", 6.23, 30);

    if (person1->age > person2->age)
    {
        cout << person1->name << endl;
    }
    else if (person2->age > person1->age)
    {
        cout << person2->name << endl;
    }
    else
    {
        cout << "Both persons have the same age." << endl;
    }
    delete person1;
    delete person2;

    return 0;
}
