#include "SelfPlayKiosk.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Step 1 Test
    SelfPlayKiosk kiosk = SelfPlayKiosk();
    cout << "Customers Served: " << kiosk.getCustomersServed() << endl;
    cout << "Total Sales: " << kiosk.getTotalSales() << endl;
    cout << "Current Amount Due: " << kiosk.getCurrentAmountDue() << endl;

    return 0;
}//end main()