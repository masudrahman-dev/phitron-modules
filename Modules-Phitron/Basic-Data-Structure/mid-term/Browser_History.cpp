#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> webAddresses;
    string address;

    while (cin >> address)
    {
        if (address == "end")
        {
            break;
        }
        webAddresses.push_back(address);
    }

    int Q;
    cin >> Q;

    list<string>::iterator current = webAddresses.begin();

    for (int i = 0; i < Q; i++)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string newAddress;
            cin >> newAddress;

            auto it = find(webAddresses.begin(), webAddresses.end(), newAddress);

            if (it != webAddresses.end())
            {
                current = it;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {

            if (next(current) != webAddresses.end())
            {
                current++;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (current != webAddresses.begin())
            {
                current--;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
