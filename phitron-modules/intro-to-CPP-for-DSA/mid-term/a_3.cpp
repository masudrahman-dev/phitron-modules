// #include <bits/stdc++.h>
// using namespace std;

// class MyClass {
// public:
//     int value;

//     MyClass(int num) : value(num) {}

//     void display() {
//         cout << "Value: " << value << endl;
//     }
// };

// MyClass createStatic() {
//     static MyClass staticObj(313);
//     return staticObj;
// }

// int main() {
//     MyClass obj = createStatic();
//     obj.display();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;


class Person {
public:
  string name;
  float height;
  int age;

  Person(string name, float height, int age) {
    this->name = name;
    this->height = height;
    this->age = age;
  }
};

Person* getPerson() {
  static Person person("John Doe", 1.75, 30);
  return &person;
}
