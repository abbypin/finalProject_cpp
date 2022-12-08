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
    double fourthPrice = 10.40;
// First Customer
    // Step 2 Test // First Scan
    cout << "\n\nFirst Customer: " << endl;
    kiosk.ScanItem(firstPrice);
    cout << "First Price Scan: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;

    // Step 3 Test
    kiosk.Checkout();
    cout << "\nCheckout Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    

    // Step 4 Test
    cout << "\nCurrent Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    kiosk.MakePayment(10.00);
    cout << "Results: " << endl;
    cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;
    cout << "Customers Served: " << kiosk.getCustomersServed() << endl;
    cout << "\nCurrent Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    kiosk.MakePayment(11.40);
    cout << "Results: " << endl;
    cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;
    cout << "Customers Served: " << kiosk.getCustomersServed() << endl;

// Second Customer
    // Step 2 Test // Second Scan
    cout << "\n\nSecond Customer: " << endl;
    kiosk.ScanItem(firstPrice);
    kiosk.ScanItem(secondPrice);
    cout << "Second Price Scan: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    // Step 3 Test
    kiosk.Checkout();
    cout << "\nCheckout Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    
    // Step 4 Test
    cout << "\nCurrent Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    kiosk.MakePayment(21.40);
    cout << "Results: " << endl;
    cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;
    cout << "Customers Served: " << kiosk.getCustomersServed() << endl;

// Third Customer
    // Step 2 Test // Third Scan
    cout << "\n\nThird Customer: " << endl;
    kiosk.ScanItem(firstPrice);
    kiosk.ScanItem(secondPrice);
    kiosk.ScanItem(thirdPrice);
    cout << "Third Price Scan: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    // Step 3 Test
    kiosk.Checkout();
    cout << "\nCheckout Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    
    // Step 4 Test
    cout << "\nCurrent Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    kiosk.MakePayment(0.00);
    cout << "Results: " << endl;
    cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;
    cout << "Customers Served: " << kiosk.getCustomersServed() << endl;
    // Step 4 Test
    cout << "\nCurrent Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    kiosk.MakePayment(35.00);
    cout << "Results: " << endl;
    cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;
    cout << "Customers Served: " << kiosk.getCustomersServed() << endl;
    // Step 4 Test
    cout << "\nCurrent Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    kiosk.MakePayment(8.39);
    cout << "Results: " << endl;
    cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;
    cout << "Customers Served: " << kiosk.getCustomersServed() << endl;

// Fourth Customer
    cout << "\n\nFourth Customer: " << endl;
    kiosk.ScanItem(firstPrice);
    kiosk.ScanItem(secondPrice);
    kiosk.ScanItem(thirdPrice);
    kiosk.ScanItem(fourthPrice);
    kiosk.Checkout();
    cout << "Checkout Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    
    
    // Step 4 Test
    cout << "\nCurrent Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    kiosk.MakePayment(57.55);
    cout << "Results: " << endl;
    cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;
    cout << "Customers Served: " << kiosk.getCustomersServed() << endl;

    return 0;
}//end main()