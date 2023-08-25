#include <iostream>
#include <string>

class Student {
public:
    Student(int id, int roll, char grade, const char* name) : id_(id), roll_(roll), grade_(grade), name_(name) {}

    void display() {
        std::cout << "ID: " << id_ << std::endl;
        std::cout << "Roll: " << roll_ << std::endl;
        std::cout << "Grade: " << grade_ << std::endl;
        std::cout << "Name: " << name_ << std::endl;
    }

private:
    int id_;
    int roll_;
    char grade_;
    const char* name_;
};

int main() {
    const char* name1 = "Rahim Mia";
    const char* name2 = "Karim Mia";
    Student std_1(7, 123, 'A', name1);
    std_1.display();
    Student std_2(7, 123, 'B', name2);
    std_2.display();

    return 0;
}
