// #include <iostream>

// #include <vector>

// #include <algorithm>

// int main()
// {
//      vector<int> vec{25, 35, 45, 52}; // Initializing the vector
//      vector<int>::iterator itr;

//      cout << "Actual_Vector:";
//     for (int i = 0; i < vec.size(); i++)
//     {
//         // Printing the values of the vector
//          cout << " " << vec[i];
//     }
//      cout << "\n";

//     // Initializing value to be searched
//     int a = 45;
//     // find() function is invoked to search a inside the vector
//     itr =  find(vec.begin(), vec.end(), a);

//     if (itr != vec.end())
//     {
//          cout << "Element" << a << " is found at : ";
//          cout << itr - vec.begin() << " (Counting from 0th index) \n";
//     }
//     else
//     {
//          cout << "Element not found.\n\n";
//     }

//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <vector>

// int main()
// {
//      vector<int> str = {1, 2, 3, 2, 4, 2, 5, 3, 1, 5, 4, 5, 1, 2};

//     // Replace all occurrences of 2 with 0
//      replace(str.begin(), str.end(), 2, 0);

//     // Print the modified vector
//     for (int num : str)
//     {
//          cout << num << " ";
//     }
//      cout <<  endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     string string1 = "Today I will eat Apple";
//     string string2 = "$";

//     cout << "Before using replace() function : " << string1 << '\n';
//     // Using the replace() function.
//     string1.replace(17, 5, string2);

//     cout << "After using replace() function : " << string1 << '\n';
//     return 0;
// }

// / inserting into a string
// #include <iostream>
// #include <string>

//     int
//     main()
// {
//      string str = "to be question";
//      string str2 = "the ";
//      string str3 = "or not to be";
//      string::iterator it;

//     // used in the same order as described above:
//     str.insert(6, str2);                                // to be (the )question
//     str.insert(6, str3, 3, 4);                          // to be (not )the question
//     str.insert(10, "that is cool", 8);                  // to be not (that is )the question
//     str.insert(10, "to be ");                           // to be not (to be )that is the question
//     str.insert(15, 1, ':');                             // to be not to be(:) that is the question
//     it = str.insert(str.begin() + 5, ',');              // to be(,) not to be: that is the question
//     str.insert(str.end(), 3, '.');                      // to be, not to be: that is the question(...)
//     str.insert(it + 2, str3.begin(), str3.begin() + 3); // (or )

//      cout << str << '\n';
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     std::string str = "Hello, world!";
//     size_t index = str.find("foo");
//     cout << index << endl;
//     if (index == -1)
//     {
//         std::cout << "Substring 'foo' not found in the string." << std::endl;
//     }
//     else
//     {
//         std::cout << "Substring 'foo' found at index: " << index << std::endl;
//     }

//     return 0;
// }

#include <iostream>
#include <string>

int main()
{
    std::string word1, word2;

    std::cout << "Enter two words separated by a space: ";
    std::getline(std::cin, word1, '.');
    std::getline(std::cin, word2);

    std::cout << "First word: " << word1 << std::endl;
    std::cout << "Second word: " << word2 << std::endl;

    return 0;
}
