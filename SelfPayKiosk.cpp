#include "SelfPayKiosk.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Step 6
void SimulateSales(int numSales, double initialPrice, double incrPrice) {
    // Kiosk Unique Pointer
    unique_ptr<SelfPayKiosk>kioskptr(new SelfPayKiosk());// Makes the kiosk constant
    // Variable Item Price
    double itemPrice = initialPrice; // Start at initialPrice and incrament

    // Simulate Sales Loop
    while (numSales > 0) {
        // Print Header
        cout << "\n\nCustomer " << (kioskptr->getCustomersServed() + 1) << ": " << endl;
        
        // Add Item
        kioskptr->ScanItem(itemPrice);
        // Print New Current Amount Due
        cout << "New Current Amount Due: $" << fixed << setprecision(2) << kioskptr->getCurrentAmountDue() << endl;

        // Checkout
        kioskptr->Checkout();
        // Print Checkout
        cout << "\nCheckout: " << endl;
        cout << "Current Amount Due: $" << fixed << setprecision(2) << kioskptr->getCurrentAmountDue() << endl;

        // Payment Variable
        double payment = kioskptr->getCurrentAmountDue() + 1.00;

        // MakePayment
        kioskptr->MakePayment(payment);
        // Print Make Payment
        cout << "Results: " << endl;
        cout << "Current Amount Due: $" << fixed << setprecision(2) << kioskptr->getCurrentAmountDue() << endl;
        cout << "Total Sales: $" << fixed << setprecision(2) << kioskptr->getTotalSales() << endl;
        cout << "Customers Served: " << kioskptr->getCustomersServed() << endl;

        // Increment Price
        itemPrice += incrPrice;
        // Increment Number of Sales
        numSales--;
    }//end while-loop
}//end SimulateSales()

int main() {
    // Variables
    int numSales = 8;
    double initialPrice = 5.00;
    double incrPrice = 10.50;
    // Step 6
    SimulateSales(numSales, initialPrice, incrPrice);
    return 0;
}//end main()

// A fake function that holds my old code for now. For visibilty because the function can colapse.
void holdCommentsFunction() {
//     // Step 1 Test
//     cout << "First Test: " << endl;
//     SelfPayKiosk kiosk = SelfPayKiosk();
//     cout << "Customers Served: " << kiosk.getCustomersServed() << endl;
//     cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;
//     cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;

//     // Step 2 Test
//     double firstPrice = 20.00;
//     double secondPrice = -10.00;
//     double thirdPrice = 20.55;
//     double fourthPrice = 10.40;
// // First Customer
//     // Step 2 Test // First Scan
//     cout << "\n\nFirst Customer: " << endl;
//     kiosk.ScanItem(firstPrice);
//     cout << "First Price Scan: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;

//     // Step 3 Test
//     kiosk.Checkout();
//     cout << "\nCheckout Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;

//     // Step 4 Test
//     cout << "\nCurrent Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
//     kiosk.MakePayment(10.00);
//     cout << "Results: " << endl;
//     cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
//     cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;
//     cout << "Customers Served: " << kiosk.getCustomersServed() << endl;
//     cout << "\nCurrent Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
//     kiosk.MakePayment(11.40);
//     cout << "Results: " << endl;
//     cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
//     cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;
//     cout << "Customers Served: " << kiosk.getCustomersServed() << endl;

// // Second Customer
//     // Step 2 Test // Second Scan
//     cout << "\n\nSecond Customer: " << endl;
//     kiosk.ScanItem(firstPrice);
//     kiosk.ScanItem(secondPrice);
//     cout << "Second Price Scan: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;

//     // Step 3 Test
//     kiosk.Checkout();
//     cout << "\nCheckout Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
//     // Step 5 Test
//     kiosk.CancelTransaction();
//     cout << "\nCancel Transaction: " << endl;
//     cout << "Result: " << endl;
//     cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
//     cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;
//     cout << "Customers Served: " << kiosk.getCustomersServed() << endl;

//     // Step 4 Test
//     cout << "\nCurrent Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
//     kiosk.MakePayment(21.40);
//     cout << "Results: " << endl;
//     cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
//     cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;
//     cout << "Customers Served: " << kiosk.getCustomersServed() << endl;

// // Third Customer
//     // Step 2 Test // Third Scan
//     cout << "\n\nThird Customer: " << endl;
//     kiosk.ScanItem(firstPrice);
//     kiosk.ScanItem(secondPrice);
//     kiosk.ScanItem(thirdPrice);
//     cout << "Third Price Scan: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    
//     // Step 3 Test
//     kiosk.Checkout();
//     cout << "\nCheckout Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    
//     // Step 4 Test
//     cout << "\nCurrent Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
//     kiosk.MakePayment(0.00);
//     cout << "Results: " << endl;
//     cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
//     cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;
//     cout << "Customers Served: " << kiosk.getCustomersServed() << endl;
//     // Step 4 Test
//     cout << "\nCurrent Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
//     kiosk.MakePayment(35.00);
//     cout << "Results: " << endl;
//     cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
//     cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;
//     cout << "Customers Served: " << kiosk.getCustomersServed() << endl;
//     // Step 4 Test
//     cout << "\nCurrent Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
//     kiosk.MakePayment(8.39);
//     cout << "Results: " << endl;
//     cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
//     cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;
//     cout << "Customers Served: " << kiosk.getCustomersServed() << endl;

// // Fourth Customer
//     cout << "\n\nFourth Customer: " << endl;
//     kiosk.ScanItem(firstPrice);
//     kiosk.ScanItem(secondPrice);
//     kiosk.ScanItem(thirdPrice);
//     kiosk.ScanItem(fourthPrice);
//     kiosk.Checkout();
//     cout << "Checkout Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
    
//     // Step 4 Test
//     cout << "\nCurrent Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
//     kiosk.MakePayment(57.55);
//     cout << "Results: " << endl;
//     cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
//     cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;
//     cout << "Customers Served: " << kiosk.getCustomersServed() << endl;

//     // Step 5 Test
//     kiosk.ResetKiosk();
//     cout << "\n\nReset Kiosk: " << endl;
//     cout << "Current Amount Due: " << fixed << setprecision(2) << kiosk.getCurrentAmountDue() << endl;
//     cout << "Total Sales: " << fixed << setprecision(2) << kiosk.getTotalSales() << endl;
//     cout << "Customers Served: " << kiosk.getCustomersServed() << endl;

}