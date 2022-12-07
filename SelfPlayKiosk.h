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

        int getTotalSales() const {
            return totalSales;
        }//end getTotalSales()

        int getCurrentAmountDue() const {
            return currentAmountDue;
        }//end getCurrentAmountDue()

        // void scanItem();
        // void cancelTransaction();
        // void ckeckout();
        // double makePayment();
};//end SelfPlayKiosk

#endif