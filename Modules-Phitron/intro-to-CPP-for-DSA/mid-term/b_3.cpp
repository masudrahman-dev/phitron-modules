#include <bits/stdc++.h>
using namespace std;

class MyDoor
{
public:
    int value;

    void display()
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    MyDoor obj;
    obj.value = 232;

    MyDoor *ptr = &obj;
    ptr->display();

    return 0;
}
