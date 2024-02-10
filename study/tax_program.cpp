#include <iostream>

using namespace std;


int main() {
    double sales = 95000;
    double state_tax_percent = 4;
    double country_tax_percent = 2;

    const double state_tax = sales *  state_tax_percent / 100;
    const double country_tax = sales *   country_tax_percent / 100;

    double total_tax = state_tax + country_tax;

    cout << "State tax: " << state_tax 
         << " " <<  endl
         << "Country tax: " << country_tax 
         <<  " " << endl
         << "Total tax: " << total_tax 
         << " " << endl << endl;

    cout << "Income after tax: "
         << sales - total_tax 
         << endl;
}