#include <bits/stdc++.h>
using namespace std;


int main() {
    list<string> webAddresses;
    string address;
    
    // Read the initial web addresses
    while (cin >> address) {
        if (address == "end") {
            break;
        }
        webAddresses.push_back(address);
    }
    
    int Q;
    cin >> Q;
    
    list<string>::iterator current = webAddresses.begin();
    
    for (int i = 0; i < Q; i++) {
        string command;
        cin >> command;
        
        if (command == "visit") {
            string newAddress;
            cin >> newAddress;
            
            // Find the address in the list
            auto it = find(webAddresses.begin(), webAddresses.end(), newAddress);
            
            if (it != webAddresses.end()) {
                current = it;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (command == "next") {
            // Move to the next address if available
            if (next(current) != webAddresses.end()) {
                current++;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (command == "prev") {
            // Move to the previous address if available
            if (current != webAddresses.begin()) {
                current--;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }
    
    return 0;
}
