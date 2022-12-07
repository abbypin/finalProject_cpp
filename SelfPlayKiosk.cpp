#include "SelfPlayKiosk.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Step 1 Test
    cout << "First Test: " << endl;
    SelfPlayKiosk kiosk = SelfPlayKiosk();
    cout << "Customers Served: " << kiosk.getCustomersServed() << endl;
    cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;
    cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;

    // Step 2 Test
    double firstPrice = 20.00;
    double secondPrice = -10.00;
    double thirdPrice = 20.55;
    // First Scan
    cout << "\nSecond Test: " << endl;
    kiosk.ScanItem(firstPrice);
    cout << "First Price Scan: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    // Second Scan
    kiosk.ScanItem(secondPrice);
    cout << "Second Price Scan: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    // Third Scan
    kiosk.ScanItem(thirdPrice);
    cout << "Third Price Scan: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;

    return 0;
}//end main()