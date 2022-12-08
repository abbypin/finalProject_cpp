#ifndef SELFPAYKIOSK_H
#define SELFPAYKIOSK_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class SelfPayKiosk {
    private:
        // Step 0
        const double SALES_TAX = 0.07; // 7%
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
        // Step 4
        void MakePayment(double payment);
        // Step 5
        void ResetKiosk();
        void CancelTransaction();
        
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
    currentAmountDue += (currentAmountDue * SALES_TAX);
}//end Checkout()

// Step 4
void SelfPayKiosk::MakePayment(double payment) {
    if (payment > 0) {
        if (payment >= currentAmountDue) {
            // Add to the Total Sales
            totalSales += currentAmountDue;
            // Incrament Customers Served
            customersServed += 1;
            // Reset for Next Customer
            currentAmountDue = 0.0;
        } else if (payment < currentAmountDue) {
            // Add to the Total Sales
            totalSales += payment;
            // Reduce the Amount Due
            currentAmountDue -= payment;
        }//end else-if
    } //end if
}//end MakePayment()

void SelfPayKiosk::ResetKiosk() {
    currentAmountDue = 0.0;
    totalSales = 0.0;
    customersServed = 0;
}//end ResetKiosk()

void SelfPayKiosk::CancelTransaction() {
    currentAmountDue = 0.0;
}//end CancelTransaction()

#endif