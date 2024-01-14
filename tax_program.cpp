#include <iostream>

using namespace std;


int main() {
    double sales = 95000;
    double state_tax_percent = 4;
    double country_tax_percent = 2;

    const double state_tax = sales *  state_tax_percent / 100;
    const double country_tax = sales *   country_tax_percent / 100;

    double total_tax = state_tax + country_tax;

    cout << state_tax 
         << " " 
         << country_tax <<  " "
         << total_tax
         << endl;

    cout << sales - total_tax 
         << " income after tax" 
         << endl;
}