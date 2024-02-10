#include <iostream>

using namespace std;


int main() {
    double price = 99.99;
    float newPrice = 3.56F;
    long fileSize = 90000L;
    char letter = 'a';
    bool isValid = false;
    auto newChar = 'b';
    auto isCorrect = true;

    int number1 = 255;
    int number2 = 0b11111111;  // 255 in binary format
    int number3 = 0xff;    // it can be uppercase letters also

    cout << number1 << endl;
    cout << number2 << endl; // all will print 255
    cout << number3 << endl;

    // numbers can be positive and negative numbers
    // unsigned int number4 = 242 // when unsigned variable can not
                               // accept negative numbers.
    
    /*
        when we pass negative number to unsigned var, value will be
        unrelated big interger. so be carefull with this type.
    */

    cout << isCorrect << endl << newChar << endl;
    return 0;
}