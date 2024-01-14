#include <iostream>
#include <cmath>

int main() {

    /*
        cmath standard libaray usage and some
        standard math functions examples
    */
   
    // Dont write unnecessary comments
    double result1 = std::floor(22.3);
    double result2 = std::floor(22.3);
    double result3 = std::floor(0.3);
    double result4 = std::ceil(0.6);

    std::cout << result1 << std::endl;
    std::cout << result2 << std::endl; 
    std::cout << result3 << std::endl; 
    std::cout << result4 << std::endl; 

    int result5 = std::pow(2, 8); // example comments
    int result6 = std::pow(5, 2); 

    std::cout << std::endl;  // better to write comment above the line 
    std::cout << result5 << std::endl;
    std::cout << result6 << std::endl;

    // homework
    std::cout << "enter radius value of circle: ";
    double radius;
    const double pi = 3.14;

    std::cin >> radius;

    double area = pi * std::pow(radius, 2);
    std::cout << area << std::endl;
}