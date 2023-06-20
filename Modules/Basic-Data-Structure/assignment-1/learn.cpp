#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> values;

    // Insert elements into the unordered_set
    values.insert(5);
    values.insert(2);
    values.insert(8);
    values.insert(23);
    values.insert(2);
    values.insert(2);
    values.insert(34); // Duplicate value, will be ignored
   // Count the occurrences of elements
    int count1 = values.count(2);  // Count of 2
    int count2 = values.count(4);  // Count of 4

    cout << "Count of 2: " << count1 << endl;
    cout << "Count of 4: " << count2 << endl;
    // Check if an element exists in the unordered_set
    // if (values.count(2) > 0)
    // {
    //     cout << "2 exists in the unordered_set" << endl;
    // }
    // else
    // {
    //     cout << "2 does not exist in the unordered_set" << endl;
    // }

    // Iterate over the elements in the unordered_set
    // cout << "Elements in the unordered_set: ";
    // for (const auto &value : values)
    // {
    //     cout << value << " ";
    // }
    // cout << endl;

    // Remove an element from the unordered_set
    // values.erase(5);

    // Check the size of the unordered_set
    // cout << "Size of the unordered_set: " << values.size() << endl;

    return 0;
}
