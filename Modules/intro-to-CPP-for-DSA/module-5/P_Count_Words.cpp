// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
/**
 * write operation
 */
// string name = "method";
// stringstream obj1(name);

// cout << obj1.str() << endl;

// stringstream obj2;
// obj2 << "method2";
// cout << obj2.str() << endl;

// stringstream obj3;
// obj3.str("Method3");
// cout << obj3.str() << endl;

// stringstream obj1;
// obj1 << "method1 to read the data from stringstream object";
// string buf;
// int counter = 0;
// while (obj1 >> buf)
// {
// 	counter++;
// 	cout << buf << " ";
// }
// cout << counter;

// stringstream obj2;
// obj2.str("Method2 to read the data from stringstream object");
// cout << obj2.str() << endl;

// stringstream obj1("This is the content of the obj1");
// string cur;
// while (obj1 >> cur)
// {
// 	cout << cur << endl;
// }
// cout << endl;

// obj1.clear();

// if (obj1 >> cur)
// {
// 	cout << "obj1 is not empty " << endl;
// }
// else
// {
// 	cout << "obj1 is empty" << endl;
// }
// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	string str = "This is the string";
// 	stringstream obj(str);

// 	int count = 0;
// 	// Buffer string to extract the data from the stringstream object
// 	string buf;
// 	while (obj >> buf)
// 	{
// 		count++;
// 	}

// 	cout << count << endl;

// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	string str = "one two three one three four three four five five";
// 	stringstream ss(str);
// 	map<string, int> freq;
// 	string buf;
// 	while (ss >> buf)
// 	{

// 		freq[buf]++;
// 		// cout << freq[buf] << endl;
// 	}
// 	for (auto && i : freq)
// 	{
// 		cout << i.first << ": " << i.second << endl;
// 	}

// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	string str;
// 	getline(cin, str);

// 	stringstream ss(str);
// 	string buf;
// 	int count = 0;
// 	map<string, int> freq;
// 	while (ss >> buf)
// 	{
// 		cout << freq[buf]++ << endl;

// 		count++;
// 	}
// 	for (auto &it : freq)
// 	{
// 		cout << it.first << ": " << it.second << endl;
// 	}
// 	cout << count << endl;

// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// bool isWord(const string &word)
// {
// 	for (char c : word)
// 	{
// 		if (!isalpha(c))
// 			return false;
// 	}
// 	return true;
// }

// int main()
// {
// 	string str;
// 	getline(cin, str);

// 	stringstream ss(str);
// 	string buf;
// 	int count = 0;
// 	while (ss >> buf)
// 	{
// 		if (isWord(buf))
// 		{

// 			count++;
// 		}
// 	}

// 	cout << count << endl;

// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int countWords(const string &str)
{
	int wordCount = 0;
	bool inWord = false;

	for (char c : str)
	{
		cout << c << endl;
		if (isalpha(c))
		{
			if (!inWord)
			{
				wordCount++;
				inWord = true;
			}
		}
		else
		{
			inWord = false;
		}
	}

	return wordCount;
}

int main()
{
	string str;
	getline(cin, str);

	int wordCount = countWords(str);
	cout << wordCount << endl;

	return 0;
}
