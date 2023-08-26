#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(list<int> &myList)
{
    unordered_set<int> seen;
    auto it = myList.begin();

    while (it != myList.end())
    {
        if (seen.find(*it) != seen.end())
        {
            it = myList.erase(it);
        }
        else
        {
            seen.insert(*it);
            ++it;
        }
    }
}

void printList(const list<int> &myList)
{
    for (const auto &value : myList)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    list<int> myList;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        myList.push_back(val);
    }

    removeDuplicates(myList);
    myList.sort();
    printList(myList);

    return 0;
}
