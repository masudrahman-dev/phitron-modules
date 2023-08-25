#include <iostream>
#include <list>

int main() {
    std::list<int> myList(10, 5);

    for (auto it = myList.begin(); it != myList.end(); it++) {
        std::cout << *it << std::endl;
    }

    return 0;
}
