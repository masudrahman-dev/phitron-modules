// #include <iostream>
// #include <algorithm> // Include the algorithm header for std::max_element
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<int> arr = {10, 20, 5, 15, 30};

//     // Use std::max_element to find the maximum element in the array
//     auto maxElement = std::max_element(arr.begin(), arr.end());

//     if (maxElement != arr.end())
//     {
//         int maxValue = *maxElement; // Dereference the iterator to get the maximum value
//         cout << "Maximum value in the array: " << maxValue << endl;
//     }
//     else
//     {
//         cout << "Array is empty." << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> numbers = {5, 2, 8, 1, 9, 4};
//     auto maxIt = max_element(numbers.begin(), numbers.end());

//     if (maxIt != numbers.end())
//     {
//         cout << "Maximum element: " << *maxIt << endl; // Dereference maxIt to get the maximum value
//     }
//     else
//     {
//         cout << "Empty range." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// pair<int, int> findMaxAndSecondMax(vector<int> &arr)
// {
//     int maxVal = INT_MIN;       // Initialize maxVal to the smallest possible integer
//     int secondMaxVal = INT_MIN; // Initialize secondMaxVal to the smallest possible integer

//     for (int num : arr)
//     {
//         if (num > maxVal)
//         {
//             secondMaxVal = maxVal;
//             maxVal = num;
//         }
//         else if (num > secondMaxVal && num != maxVal)
//         {
//             secondMaxVal = num;
//         }
//     }

//     return make_pair(maxVal, secondMaxVal);
// }

// int main()
// {
//     vector<int> arr = {10, 20, 5, 15, 30};

//     pair<int, int> maxAndSecondMax = findMaxAndSecondMax(arr);

//     cout << "Maximum value: " << maxAndSecondMax.first << endl;
//     cout << "Second maximum value: " << maxAndSecondMax.second << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// pair<pair<int, int>, pair<int, int>> findMaxAndSecondMaxWithIndices(vector<int> &arr)
// {
//     int maxVal = INT_MIN;
//     int firstMaxIndex = -1;
//     int secondMaxVal = INT_MIN;
//     int secondMaxIndex = -1;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         int num = arr[i];

//         if (num > maxVal)
//         {
//             secondMaxVal = maxVal;
//             secondMaxIndex = firstMaxIndex;
//             maxVal = num;
//             firstMaxIndex = i;
//         }
//         else if (num > secondMaxVal && num != maxVal)
//         {
//             secondMaxVal = num;
//             secondMaxIndex = i;
//         }
//     }

//     return make_pair(make_pair(maxVal, firstMaxIndex), make_pair(secondMaxVal, secondMaxIndex));
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         pair<pair<int, int>, pair<int, int>> maxAndSecondMaxWithIndices = findMaxAndSecondMaxWithIndices(arr);

//         cout << "Maximum value: " << maxAndSecondMaxWithIndices.first.first << " at index " << maxAndSecondMaxWithIndices.first.second << endl;
//         cout << "Second maximum value: " << maxAndSecondMaxWithIndices.second.first << " at index " << maxAndSecondMaxWithIndices.second.second << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// pair<pair<int, int>, pair<int, int>> findMaxAndSecondMaxWithIndices(vector<int> &arr)
// {
//     int maxVal = INT_MIN;
//     int firstMaxIndex = -1;
//     int secondMaxVal = INT_MIN;
//     int secondMaxIndex = -1;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         int num = arr[i];

//         if (num > maxVal)
//         {
//             secondMaxVal = maxVal;
//             secondMaxIndex = firstMaxIndex;
//             maxVal = num;
//             firstMaxIndex = i;
//         }
//         else if (num > secondMaxVal)
//         {
//             secondMaxVal = num;
//             secondMaxIndex = i;
//         }
//     }

//     return make_pair(make_pair(maxVal, firstMaxIndex), make_pair(secondMaxVal, secondMaxIndex));
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         pair<pair<int, int>, pair<int, int>> maxAndSecondMaxWithIndices = findMaxAndSecondMaxWithIndices(arr);

//         cout << "Maximum value: " << maxAndSecondMaxWithIndices.first.first << " at index " << maxAndSecondMaxWithIndices.first.second << endl;
//         cout << "Second maximum value: " << maxAndSecondMaxWithIndices.second.first << " at index " << maxAndSecondMaxWithIndices.second.second << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// pair<int, int> find(vector<int> &arr)
// {
//     int firstMaxIndex = -1;
//     int secondMaxIndex = -1;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (firstMaxIndex == -1 || arr[i] > arr[firstMaxIndex])
//         {
//             secondMaxIndex = firstMaxIndex;
//             firstMaxIndex = i;
//         }
//         else if (secondMaxIndex == -1 || arr[i] > arr[secondMaxIndex])
//         {
//             secondMaxIndex = i;
//         }
//     }

//     return make_pair(firstMaxIndex, secondMaxIndex);
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         pair<int, int> PII = find(arr);

//         cout << PII.first << " " << PII.second << endl;
//         }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// pair<int, int> find(vector<int> &arr)
// {
//     int firstMaxIndex = -1;
//     int secondMaxIndex = -1;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (firstMaxIndex == -1 || arr[i] > arr[firstMaxIndex])
//         {
//             secondMaxIndex = firstMaxIndex;
//             firstMaxIndex = i;
//         }
//         else if (secondMaxIndex == -1 || arr[i] > arr[secondMaxIndex])
//         {
//             secondMaxIndex = i;
//         }
//     }

//     return make_pair(firstMaxIndex, secondMaxIndex);
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         pair<int, int> PII = find(arr);

//         cout << PII.first << " " << PII.second << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// void find(vector<int> &arr, int &firstMaxIndex, int &secondMaxIndex)
// {
//     firstMaxIndex = 0;
//     secondMaxIndex = -1;

//     for (int i = 1; i < arr.size(); i++)
//     {
//         if (arr[i] > arr[firstMaxIndex])
//         {
//             secondMaxIndex = firstMaxIndex;
//             firstMaxIndex = i;
//         }
//         else if (secondMaxIndex == -1 || arr[i] > arr[secondMaxIndex])
//         {
//             secondMaxIndex = i;
//         }
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         int firstMaxIndex, secondMaxIndex;
//         find(arr, firstMaxIndex, secondMaxIndex);

//         cout << firstMaxIndex << " " << secondMaxIndex << endl;
//     }

//     return 0;
// }

// #include <algorithm>
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> numbers = {1, 8, 3, 4, 5, 7, 6, 5, 2};
//     auto maxIt = max_element(numbers.begin(), numbers.end());

//     if (maxIt != numbers.end())
//     {
//         // Dereference maxIt to get the maximum value
//         cout << "Maximum element: " << *maxIt << endl;

//         // Calculate the index of the maximum element
//         int maxIndex = distance(numbers.begin(), maxIt);
//         cout << "Index of maximum element: " << maxIndex << endl;
//     }
//     else
//     {
//         cout << "Empty range." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> numbers = {1, 8, 3, 4, 5, 7, 6, 5, 2};

//     // Find the maximum element and its index
//     auto maxIt = max_element(numbers.begin(), numbers.end());
//     int maxIndex = distance(numbers.begin(), maxIt);
//     // Calculate the index of the maximum element
//     int maxIndex = distance(numbers.begin(), maxIt);
//     cout << "Index of maximum element: " << maxIndex << endl;
//     // Set the maximum element to a very small value, ensuring it's not found again
//     *maxIt = numeric_limits<int>::min();

//     // Find the second maximum element and its index
//     auto secondMaxIt = max_element(numbers.begin(), numbers.end());
//     int secondMaxIndex = distance(numbers.begin(), secondMaxIt);

//     // Check if a second maximum element exists
//     if (secondMaxIndex != maxIndex)
//     {
//         cout << "Second maximum element: " << *secondMaxIt << endl;
//         cout << "Index of second maximum element: " << secondMaxIndex << endl;
//     }
//     else
//     {
//         cout << "No second maximum element found." << endl;
//     }

//     return 0;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> numbers(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> numbers[i];
//         }

//         auto maxIt = max_element(numbers.begin(), numbers.end());
//         int maxIndex = distance(numbers.begin(), maxIt);

//         *maxIt = numeric_limits<int>::min();

//         auto secondMaxIt = max_element(numbers.begin(), numbers.end());
//         int secondMaxIndex = distance(numbers.begin(), secondMaxIt);

//         cout << maxIndex << " " << secondMaxIndex << endl;

//         // Clear the vector by creating a new empty vector
//         numbers.clear();
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     vector<int> numbers;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         for (int i = 0; i < n; i++)
//         {
//             int val;
//             cin >> val;
//             numbers.push_back(val);
//         }

//         int firstMaxIndex = -1;
//         int secondMaxIndex = -1;

//         for (int i = 0; i < n; i++)
//         {
//             if (firstMaxIndex == -1 || numbers[i] > numbers[firstMaxIndex])
//             {
//                 secondMaxIndex = firstMaxIndex;
//                 firstMaxIndex = i;
//             }
//             else if (secondMaxIndex == -1 || numbers[i] > numbers[secondMaxIndex])
//             {
//                 secondMaxIndex = i;
//             }
//         }

//         cout << firstMaxIndex << " " << secondMaxIndex << endl;
//         numbers.clear();
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int findIndexByValue(const vector<int> &arr, int targetValue)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] == targetValue)
//         {
//             return i; // Return the index of the target value
//         }
//     }
//     return -1; // Return -1 if the value is not found in the vector
// }

// int main()
// {
//     vector<int> numbers = {1, 8, 3, 4, 5, 7, 6, 5, 2};
//     int target = 8;

//     int index = findIndexByValue(numbers, target);

//     if (index != -1)
//     {
//         cout << "Index of " << target << " is " << index << endl;
//     }
//     else
//     {
//         cout << target << " not found in the vector." << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     vector<int> numbers;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         for (int i = 0; i < n; i++)
//         {
//             int val;
//             cin >> val;
//             numbers.push_back(val);
//         }
//         int firstMaxIndex = -1;
//         int secondMaxIndex = -1;

//         for (int i = 0; i < n; i++)
//         {
//             if (firstMaxIndex == -1 || numbers[i] > numbers[firstMaxIndex])
//             {
//                 secondMaxIndex = firstMaxIndex;
//                 firstMaxIndex = i;
//             }
//             else if (secondMaxIndex == -1 || numbers[i] > numbers[secondMaxIndex])
//             {
//                 secondMaxIndex = i;
//             }
//         }

//         cout << firstMaxIndex << " " << secondMaxIndex << endl;
//         numbers.clear();
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void find(const vector<int> &arr, int fistMax, int secondMax)
// {

//     int left, right;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] == fistMax)
//         {
//             left = i;
//         }
//         if (arr[i] == secondMax)
//         {
//             right = i;
//         }
//     }

// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> numbers;
//         for (int i = 0; i < n; i++)
//         {
//             int val;
//             cin >> val;
//             numbers.push_back(val);
//         }

//         vector<int> copied_numbers(numbers);
//         sort(copied_numbers.begin(), copied_numbers.end());
//         // cout << copied_numbers[n - 1] << " " << copied_numbers[n - 2];

//         find(numbers, copied_numbers[n - 1], copied_numbers[n - 2]);
//         cout << endl;
//         numbers.clear();
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void find(const vector<int> &arr, int firstMax, int secondMax)
{
    int left = -1, right = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == firstMax)
        {
            left = i;
        }
        if (arr[i] == secondMax)
        {
            right = i;
        }
    }

    cout << min(left, right) << " " << max(left, right) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> numbers;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            numbers.push_back(val);
        }

        vector<int> copied_numbers(numbers);
        sort(copied_numbers.begin(), copied_numbers.end());

        find(numbers, copied_numbers[n - 1], copied_numbers[n - 2]);

        numbers.clear();
    }

    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// pair<int, int> findMaxWaterContainer(vector<int> &heights)
// {
//     int left = 0;
//     int right = heights.size() - 1;
//     int maxArea = 0;
//     pair<int, int> result;

//     while (left < right)
//     {
//         int minHeight = min(heights[left], heights[right]);
//         int width = right - left;
//         int currentArea = minHeight * width;

//         if (currentArea > maxArea)
//         {
//             maxArea = currentArea;
//             result = make_pair(left, right);
//         }

//         if (heights[left] < heights[right])
//         {
//             left++;
//         }
//         else
//         {
//             right--;
//         }
//     }

//     return result;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> heights(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> heights[i];
//         }

//         pair<int, int> maxContainer = findMaxWaterContainer(heights);

//         cout << maxContainer.first << " " << maxContainer.second << endl;
//     }

//     return 0;
// }
