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
// void insert_node(Node *&head, int val)
// {
//     Node *newNode = new Node(val);

//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }

//     Node *curr = head;
//     while (curr->next != NULL)
//     {
//         curr = curr->next;
//     }
//     curr->next = newNode;
// }

// void get_mid(Node *head)
// {
//     int counter = 0;
//     Node *curr = head;
//     while (curr != NULL)
//     {
//         counter++;
//         curr = curr->next;
//     }
//     Node *curr2 = head;
//     int mid = counter / 2;
//     for (int i = 0; i < mid - 1; i++)
//     {
//         cout << curr2->val << endl;
//         curr2 = curr2->next;
//     }
// }
// int main()
// {
//     Node *head = NULL;
//     int val;
//     while (cin >> val && val != -1)
//     {
//         insert_node(head, val);
//     }
//     get_mid(head);
//     return 0;
// }

// #include <iostream>
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

// void insert_node(Node *&head, int val)
// {
//     Node *newNode = new Node(val);

//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }

//     Node *curr = head;
//     while (curr->next != NULL)
//     {
//         curr = curr->next;
//     }
//     curr->next = newNode;
// }

// void print_middle_elements(Node *head)
// {
//     if (head == NULL)
//     {
//         cout << "Empty list." << endl;
//         return;
//     }

//     Node *slow = head;
//     Node *fast = head;
//     Node *prevSlow = NULL;

//     while (fast != NULL && fast->next != NULL)
//     {
//         fast = fast->next->next;
//         prevSlow = slow;
//         slow = slow->next;
//     }

//     if (fast == NULL)
//     {
//         // Even number of elements, print two middle elements
//         // cout << "Middle Elements: " << prevSlow->val << " " << slow->val << endl;
//         cout << prevSlow->val << " " << slow->val << endl;
//     }
//     else
//     {
//         // Odd number of elements, print the middle element
//         // cout << "Middle Element: " << slow->val << endl;
//         cout << slow->val << endl;
//     }
// }

// int main()
// {
//     Node *head = NULL;
//     int val;
//     while (cin >> val && val != -1)
//     {
//         insert_node(head, val);
//     }

//     print_middle_elements(head);

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

// void insert_node(Node *&head, int val)
// {
//     Node *newNode = new Node(val);

//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }

//     Node *curr = head;
//     while (curr->next != NULL)
//     {
//         curr = curr->next;
//     }
//     curr->next = newNode;
// }

// void sort_and_get_mid(Node *head)
// {
//     Node *curr = head;
//     Node *prev = NULL;
//     while (curr != NULL)
//     {
//         Node *next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     head = prev;

//     int counter = 0;
//     Node *curr2 = head;
//     while (curr2 != NULL)
//     {
//         counter++;
//         curr2 = curr2->next;
//     }
//     int mid = counter / 2;
//     Node *midNode = head;
//     for (int i = 0; i < mid - 1; i++)
//     {
//         midNode = midNode->next;
//     }

//     if (mid == counter / 2)
//     {
//         cout << midNode->val << endl;
//     }
//     else
//     {
//         cout << midNode->val << " " << midNode->next->val << endl;
//     }
// }

// int main()
// {
//     Node *head = NULL;
//     int val;
//     while (cin >> val && val != -1)
//     {
//         insert_node(head, val);
//     }
//     sort_and_get_mid(head);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void insert_node(Node *&head, int val)
// {
//     Node *newNode = new Node(val);

//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }

//     Node *curr = head;
//     while (curr->next != NULL)
//     {
//         curr = curr->next;
//     }
//     curr->next = newNode;
// }

// void sort_and_get_mid(Node *head)
// {
//     Node *curr = head;
//     Node *prev = NULL;
//     while (curr != NULL)
//     {
//         Node *next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     head = prev;

//     int counter = 0;
//     Node *curr2 = head;
//     while (curr2 != NULL)
//     {
//         counter++;
//         curr2 = curr2->next;
//     }
//     int mid = counter / 2;
//     Node *midNode = head;
//     for (int i = 0; i < mid - 1; i++)
//     {
//         midNode = midNode->next;
//     }

//     if (mid == counter / 2)
//     {
//         cout << midNode->val << endl;
//     }
//     else
//     {
//         cout << midNode->val << " " << midNode->next->val << endl;
//     }
// }

// int main()
// {
//     Node *head = NULL;
//     int val;
//     while (cin >> val && val != -1)
//     {
//         insert_node(head, val);
//     }
//     sort_and_get_mid(head);
//     return 0;
// }

// Function to find the middle element(s) of the linked list
// void findMiddleElement(Node *head)
// {
//     if (head == NULL)
//         return;

//     Node *slow = head;
//     Node *fast = head;
//     Node *prevSlow = NULL;

//     // Move the fast pointer two steps ahead and the slow pointer one step ahead
//     // When the fast pointer reaches the end, the slow pointer will be at the middle (or close to the middle) of the list
//     while (fast != NULL && fast->next != NULL)
//     {
//         fast = fast->next->next;
//         prevSlow = slow;
//         slow = slow->next;
//     }

//     if (fast != NULL)
//     {
//         // The list has odd number of elements
//         cout << slow->val << endl;
//     }
//     else
//     {
//         // The list has even number of elements
//         cout << prevSlow->val << " " << slow->val << endl;
//     }
// }

// if (head == NULL)
//     return;

// int count = 0;
// Node *curr = head;
// while (curr != NULL)
// {
//     count++;
//     curr = curr->next;
// }

// Node *middle = head;
// int middleIndex = count / 2;
// bool isEven = (count % 2 == 0);

// for (int i = 0; i < middleIndex - 1; i++)
// {
//     middle = middle->next;
// }

// if (isEven)
// {
//     cout << middle->val << " " << middle->next->val << endl;
// }
// else
// {
//     cout << middle->val << endl;
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

void insertNode(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = newNode;
}
void get_middle(Node *head)
{
    if (head == NULL)
        return;

    Node *slow = head;
    Node *fast = head;
    Node *prevSlow = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        prevSlow = slow;
        slow = slow->next;
    }

    if (fast != NULL)
    {
        cout << slow->val << endl;
    }
    else
    {
        cout << prevSlow->val << " " << slow->val << endl;
    }
}

void sort_list(Node *&head)
{
    if (head == NULL || head->next == NULL)
        return;

    vector<int> values;
    Node *curr = head;
    while (curr != NULL)
    {
        values.push_back(curr->val);
        curr = curr->next;
    }

    sort(values.begin(), values.end(), greater<int>());

    curr = head;
    for (int i = 0; i < values.size(); i++)
    {
        curr->val = values[i];
        curr = curr->next;
    }
}

int main()
{
    Node *head = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insertNode(head, val);
    }

    sort_list(head);

    get_middle(head);

    return 0;
}
