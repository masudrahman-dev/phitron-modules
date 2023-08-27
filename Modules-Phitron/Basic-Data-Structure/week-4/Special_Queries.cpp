#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    queue<string> ticketLine;

    for (int i = 0; i < q; i++)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            string name;
            cin >> name;
            ticketLine.push(name);
        }
        else if (cmd == 1)
        {
            if (!ticketLine.empty())
            {
                cout << ticketLine.front() << endl;
                ticketLine.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
