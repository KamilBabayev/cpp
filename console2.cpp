#include <iostream>
#include <limits>

using namespace std;

int main() {
    string street;
    string city;
    string state;
    string zip;

    // getline is used to get full sentence in input
    // cin takes only till first space
    cout << "enter street: ";
    getline(cin, street);
    cout << "enter city: ";
    getline(cin, city);
    cout << "enter state: ";
    getline(cin, state);
    cout << "enter zip: ";
    getline(cin, zip);


    cout << street << ","  
         << city << ","
         << state << ","
         << zip << ","
         << endl;
}