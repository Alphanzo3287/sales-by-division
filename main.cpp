// Alphanzo Moore
// CIS-5 Online
// November 5, 2023
// Assignment 11B: Sales by Division

#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_DIVS = 3;
const int NUM_QTRS = 4;

int main() {
    double sales[NUM_DIVS][NUM_QTRS];
    double divSales[NUM_DIVS] = {0.0};
    double totalSales = 0.0;

    // Input sales data
    for (int div = 0; div < NUM_DIVS; div++) {
        cout << "Division " << div + 1 << ":\n";
        for (int qtr = 0; qtr < NUM_QTRS; qtr++) {
            cout << "Enter sales for Quarter " << qtr + 1 << ": ";
            cin >> sales[div][qtr];
            divSales[div] += sales[div][qtr];
            totalSales += sales[div][qtr];
        }
    }

    // Display division sales and total sales
    cout << fixed << setprecision(2);
    cout << "Sales Report:\n";
    for (int div = 0; div < NUM_DIVS; div++) {
        cout << "Division " << div + 1 << " Total Sales: $" << divSales[div] << endl;
    }
    cout << "Grand Total Sales: $" << totalSales << endl;

    return 0;
}
