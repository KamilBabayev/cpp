#include <iostream>


int main() {
    double fahrenheit;
    double celsius;

    std::cout << "enter fahrenheit degree: ";
    std::cin >> fahrenheit;
    
    // C = (°F - 32) ÷ 9/5  formula to convert
    celsius = (fahrenheit - 32) /  double(9/(double)5);

    std::cout << celsius;
}