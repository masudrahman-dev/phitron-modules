// #include <iostream>
// #include <vector>
// #include <unordered_set>
// using namespace std;

// int main()
// {
//     int N;
//     cin >> N;

//     vector<int> A(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> A[i];
//     }

//     unordered_set<int> values;
//     bool hasDuplicate = false;

//     for (int i = 0; i < N; i++)
//     {
//         if (values.count(A[i]) > 0)
//         {
//             hasDuplicate = true;
//             break;
//         }
//         values.insert(A[i]);
//     }

//     if (hasDuplicate)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int prefix_sum[n];
//     prefix_sum[0] = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         prefix_sum[i] = prefix_sum[i - 1] + a[i];
//     }

//     for (int i = n - 1; i >= 0; i--)
//     {
//         cout << prefix_sum[i] << " ";
//     }

//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> original = {1, 2, 3, 4, 5}; // Original vector

//     // Using assignment operator to create a copy
//     vector<int> copy = original;

//     // Modifying the copy
//     copy[0] = 10;

//     // Printing the original and the copy
//     cout << "Original vector: ";
//     for (int num : original)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     cout << "Copied vector: ";
//     for (int num : copy)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> vec1 = {1, 2, 3, 4, 5};
//     vector<int> vec2 = {5, 4, 3, 2, 1};
//     vector<int> vec3 = {1, 3, 2, 4, 5};

//     // Checking if vec1 is sorted
//     bool sorted = std::is_sorted(vec1.begin(), vec1.end());
//     cout << "vec1 is sorted: " << boolalpha << sorted << endl;

//     // Checking if vec2 is sorted
//     sorted = std::is_sorted(vec2.begin(), vec2.end());
//     cout << "vec2 is sorted: " << boolalpha << sorted << endl;

//     // Checking if vec3 is sorted
//     sorted = std::is_sorted(vec3.begin(), vec3.end());
//     cout << "vec2 is sorted: " << boolalpha << sorted << endl;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec1 = {1, 2, 3, 4, 5};
//     vector<int> vec2 = {1, 2, 3, 4, 5};
//     vector<int> vec3 = {5, 4, 3, 2, 1};

//     // Comparing if vec1 and vec2 have the same elements
//     bool sameElements = (vec1 == vec2);
//     cout << "vec1 and vec2 have the same elements: " << boolalpha << sameElements << endl;

//     // Comparing if vec1 and vec3 have the same elements
//     sameElements = (vec1 == vec3);
//     cout << "vec1 and vec3 have the same elements: " << boolalpha << sameElements << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> vec1 = {1, 2, 3, 4, 5};
//     vector<int> vec2 = {1, 2, 3, 4, 5};
//     vector<int> vec3 = {5, 4, 3, 2, 1};

//     // Comparing if vec1 and vec2 have the same elements using std::equal
//     bool sameElements = std::equal(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());
//     cout << "vec1 and vec2 have the same elements: " << boolalpha << sameElements << endl;

//     // Comparing if vec1 and vec3 have the same elements using std::equal
//     sameElements = std::equal(vec1.begin(), vec1.end(), vec3.begin(), vec3.end());
//     cout << "vec1 and vec3 have the same elements: " << boolalpha << sameElements << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, m, x;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     cin >> m;
//     int b[m];
//     for (int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//     }

//     cin >> x;

//     for (int i = 0; i < m; i++)
//     {
//         a[x + i] = b[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec = {1, 2, 4, 5};

//     // Inserting a single element at a specific position
//     vec.insert(vec.begin() + 2, 3); // Inserting 3 at index 2

//     // Printing the modified vector
//     for (int num : vec)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec = {1, 2, 5};

//     // Inserting multiple copies of a value at a specific position
//     vec.insert(vec.begin() + 2, 3, 9); // Inserting 3 copies of 4 at index 2

//     // Printing the modified vector
//     for (int num : vec)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec1 = {1, 2, 6};
//     vector<int> vec2 = {3, 4, 5};

//     // Inserting a range of elements from another vector at a specific position
//     vec1.insert(vec1.begin() + 2, vec2.begin(), vec2.end()); // Inserting elements from vec2 at index 2

//     // Printing the modified vector
//     for (int num : vec1)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }

// int x = 5;   // 'x' is an lvalue
// int y = x;   // 'x' is an lvalue on the right side of the assignment
// int& ref = x;  // 'ref' is an lvalue reference to 'x'

// int sum = 3 + 4;   // '3 + 4' is an rvalue
// int&& rref = 5;    // '5' is an rvalue and 'rref' is an rvalue reference
// int getResult();   // 'getResult()' returns an rvalue
// int z = getResult();  // 'getResult()' is an rvalue on the right side of the assignment

// #include <iostream>
// using namespace std;

// int main()
// {
//     int N = 7;
//     // cin >> N;

//     int mid = N / 2; // Middle row index

//     // Print upper half of the pattern
//     for (int i = 0; i <= mid; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             if (j >= i && j < N - i)
//             // if (i == j)
//             {
//                 cout << "\\";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     // Print lower half of the pattern
//     for (int i = mid + 1; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             if (j >= N - i - 1 && j <= i)
//             {
//                 cout << "X";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    // cin >> n;

    int mid = n / 2; // Middle row inex

    // Print upper half of the pattern
    for (int i = 0; i < mid; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "\\";
        for (int j = 0; j < (mid - i - 1) * 2; j++)
        {
            cout << " ";
        }
        cout << "/" << endl;
    }

    // Print middle row
    for (int i = 0; i < mid; i++)
    {
        cout << " ";
    }
    cout << "X" << endl;

    // Print lower half of the pattern
    for (int i = mid - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "/";
        for (int j = 0; j < (mid - i - 1) * 2; j++)
        {
            cout << " ";
        }
        cout << "\\" << endl;
    }

    return 0;
}