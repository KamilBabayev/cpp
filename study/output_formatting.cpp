#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << left << setw(15) << "Course"  << setw(16) << "Students" << endl
         << setw(15) << "C++" << setw (8) << right << 100 << left << endl
         << setw(15) << "Javascript" << setw (8) << right << 50 << left << endl;

    /*
    * Course         Students
    * C++                 100
    * Javascript           50
    */
}

