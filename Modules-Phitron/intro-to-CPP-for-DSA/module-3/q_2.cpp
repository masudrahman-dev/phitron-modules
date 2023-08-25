#include <bits/stdc++.h>
using namespace std;


class Cricketer {
public:
    int jersey_no;
    string country;
};

int main() {
    // Create a dynamic object named dhoni
    Cricketer* dhoni = new Cricketer;
    dhoni->jersey_no = 7;
    dhoni->country = "India";

    // Create a dynamic object named kohli
    Cricketer* kohli = new Cricketer;

    // Copy the data from dhoni to kohli
    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;

    // Delete the dhoni object
    delete dhoni;

    // Print the jersey_no and country of kohli
    cout << "Jersey No: " << kohli->jersey_no << endl;
    cout << "Country: " << kohli->country << endl;

    // Delete the kohli object
    delete kohli;

    return 0;
}
