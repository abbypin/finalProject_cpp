#ifndef SELFPAYKIOSK_H
#define SELFPAYKIOSK_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class SelfPayKiosk {
    private:
        // Step 0
        const int SALES_TAX = 0.7; // 7%
        int customersServed;
        double totalSales;
        double currentAmountDue;
    public:
        // Step 1
        SelfPayKiosk() {
            customersServed = 0;
            totalSales = 0.0;
            currentAmountDue = 0.0;
        }//end constructor

        int getCustomersServed() {
            return customersServed;
        }//end getCustomersServed()

        double getTotalSales() {
            return totalSales;
        }//end getTotalSales()

        double getCurrentAmountDue() {
            return currentAmountDue;
        }//end getCurrentAmountDue()

        // Step 2
        void ScanItem(double price);
        // Step 3
        void Checkout();
        // void cancelTransaction();
        // double makePayment();
};//end SelfPlayKiosk

// Step 2
void SelfPayKiosk::ScanItem(double price) {
    // Add an Item to the Amount Due
    if (price > 0)
        currentAmountDue += price;
    //return currentAmountDue;
}//end ScanItem()

// Step 3
void SelfPayKiosk::Checkout() {
    // Add Tax to the Payment
    currentAmountDue += currentAmountDue * SelfPayKiosk::SALES_TAX;
    // Add the Payment to the Kiosk's Sales
    totalSales += currentAmountDue;
}//end Checkout()

#endif