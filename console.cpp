#include <iostream>

using namespace std;

int main() {
    string server_name;
    string server_ip;
    double server_model;

    cout << "enter server name: ";
    cin >> server_name;  // get server name

    cout << "enter server ip address: ";
    cin >> server_ip;    // get server ip

    cout << "enter server model: ";
    cin >> server_model;

    // print all input information
    cout << endl << "--------------------" << endl
         << "server name: " << server_name << endl
         << "server ip: " << server_ip << endl
         << "server model: " << server_model << endl;

}