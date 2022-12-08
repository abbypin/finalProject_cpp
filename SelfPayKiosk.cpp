#include "SelfPayKiosk.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Step 1 Test
    cout << "First Test: " << endl;
    SelfPayKiosk kiosk = SelfPayKiosk();
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

    SelfPayKiosk kiosk2 = SelfPayKiosk();
    SelfPayKiosk kiosk3 = SelfPayKiosk();
    SelfPayKiosk kiosk4 = SelfPayKiosk();
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
    cout << "\nCurrent Amount Due: " << fixed << setprecision(2) << kiosk3.getCurrentAmountDue() << endl;
    cout << "Total Sales: " << fixed << setprecision(2) << kiosk3.getTotalSales() << endl;

    kiosk.Checkout();
    cout << "\nCurrent Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;

    kiosk4.ScanItem(firstPrice);
    kiosk4.ScanItem(secondPrice);
    kiosk4.ScanItem(thirdPrice);
    kiosk4.ScanItem(fourthPrice);
    kiosk4.Checkout();
    cout << "\nCurrent Amount Due: " << fixed << setprecision(2) << kiosk4.getCurrentAmountDue() << endl;
    cout << "Total Sales: " << fixed << setprecision(2) << kiosk4.getTotalSales() << endl;

    return 0;
}//end main()