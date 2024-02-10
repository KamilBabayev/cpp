#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int number;
    cin >> number;

    if (number < 100 || number > 999) {
        cout << "please enter number in range 100 - 999" << endl;
        exit(1);
    };

    cout << number / 100 << " " << (number / 10) % 10 << " " << number % 10 << endl;
    
    return 0;
}
