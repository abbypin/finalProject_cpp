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

    SelfPlayKiosk kiosk2 = SelfPlayKiosk();
    SelfPlayKiosk kiosk3 = SelfPlayKiosk();
    SelfPlayKiosk kiosk4 = SelfPlayKiosk();
    SelfPlayKiosk kiosk5 = SelfPlayKiosk();
    double fourthPrice = 10.40;

    // Step 3 Test
    cout << "\nThird Test: " << endl;
    kiosk2.ScanItem(firstPrice);
    kiosk2.Checkout();
    cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk2.getCurrentAmountDue() << endl;
    cout << "Total Sales: " << fixed << setprecision(2) << kiosk2.getTotalSales() << endl;

    kiosk3.ScanItem(firstPrice);
    kiosk3.ScanItem(secondPrice);
    kiosk3.Checkout();
    cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk3.getCurrentAmountDue() << endl;
    cout << "Total Sales: " << fixed << setprecision(2) << kiosk3.getTotalSales() << endl;

    kiosk4.ScanItem(firstPrice);
    kiosk4.ScanItem(secondPrice);
    kiosk4.ScanItem(thirdPrice);
    kiosk4.Checkout();
    cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk4.getCurrentAmountDue() << endl;
    cout << "Total Sales: " << fixed << setprecision(2) << kiosk4.getTotalSales() << endl;

    kiosk5.ScanItem(firstPrice);
    kiosk5.ScanItem(secondPrice);
    kiosk5.ScanItem(thirdPrice);
    kiosk5.ScanItem(fourthPrice);
    kiosk5.Checkout();
    cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk5.getCurrentAmountDue() << endl;
    cout << "Total Sales: " << fixed << setprecision(2) << kiosk5.getTotalSales() << endl;

    return 0;
}//end main()