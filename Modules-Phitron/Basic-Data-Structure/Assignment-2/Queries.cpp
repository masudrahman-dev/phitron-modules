// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void insert(Node *&head, int x, int v)
// {
//     Node *newNode = new Node(v);
//     if (x == 0)
//     {

//         newNode->next = head;
//         head = newNode;
//     }
//     else
//     {
//         Node *curr = head;
//         while (curr->next != NULL)
//         {
//             curr = curr->next;
//         }
//         curr->next = newNode;
//     }
// }

// void print(Node *head)
// {
//     cout << head->val << " " << head->val << endl;
// }

// int main()
// {
//     Node *head = NULL;
//     int q;
//     cin >> q;

//     for (int i = 0; i < q; i++)
//     {
//         int x, v;
//         cin >> x >> v;
//         insert(head, x, v);
//         print(head);
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void insert(Node *&head, int x, int v)
// {
//     Node *newNode = new Node(v);
//     if (x == 0)
//     {
//         newNode->next = head;
//         head = newNode;
//     }
//     else
//     {
//         Node *curr = head;
//         while (curr->next != NULL)
//         {
//             curr = curr->next;
//         }
//         curr->next = newNode;
//     }
// }

// void print(Node *head)
// {
//     Node *tail = head;
//     while (tail->next != NULL)
//     {
//         tail = tail->next;
//     }
//     cout << head->val << " " << tail->val << endl;
// }

// int main()
// {
//     Node *head = NULL;
//     int q;
//     cin >> q;

//     for (int i = 0; i < q; i++)
//     {
//         int x, v;
//         cin >> x >> v;
//         insert(head, x, v);
//         print(head);
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert(Node *&head, Node *&tail, int x, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    if (x == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }
}

void print(Node *head, Node *tail)
{
    cout << head->val << " " << tail->val << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        insert(head, tail, x, v);
        print(head, tail);
    }

    return 0;
}
