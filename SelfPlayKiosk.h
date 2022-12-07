#ifndef SELFPLAYKIOSK_H
#define SELFPLAYKIOSK_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class SelfPlayKiosk {
    private:
        // Step 0
        const int SALES_TAX = 0.7; // 7%
        int customersServed;
        double totalSales;
        double currentAmountDue;
    public:
        // Step 1
        SelfPlayKiosk() {
            customersServed = 0;
            totalSales = 0.0;
            currentAmountDue = 0.0;
        }//end constructor

        int getCustomersServed() const {
            return customersServed;
        }//end getCustomersServed()

        double getTotalSales() const {
            return totalSales;
        }//end getTotalSales()

        double getCurrentAmountDue() const {
            return currentAmountDue;
        }//end getCurrentAmountDue()

        // Step 2
        void ScanItem(double price);
        // void cancelTransaction();
        // void ckeckout();
        // double makePayment();
};//end SelfPlayKiosk

// Step 2
void SelfPlayKiosk::ScanItem(double price) {
    if (price > 0)
        currentAmountDue += price;
    //return currentAmountDue;
}//end ScanItem()

#endif