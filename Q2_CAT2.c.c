#include <stdio.h>

int main() {
    int customerID, unitConsumed;
    float chargesPerUnit, totalBill, surcharge, netAmount;
    char customerName[50];

    // Prompt for customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitConsumed);

    // Determine charges per unit based on consumption
    if (unitConsumed <= 300) {
        chargesPerUnit = 1.75;
    } else if (unitConsumed <= 600) {
        chargesPerUnit = 2.00;
    } else if (unitConsumed <= 800) {
        chargesPerUnit = 3.00;
    } else {
        chargesPerUnit = 4.00;
    }

    // Calculate total bill
    totalBill = unitConsumed * chargesPerUnit;

    // Apply surcharge if bill exceeds Kshs 500
    if (totalBill > 500) {
        surcharge = totalBill * 0.2;
 netAmount = totalBill + surcharge;
    } else {
        netAmount = totalBill;
    }

    // Ensure minimum bill is Kshs 200
    if (netAmount < 200) {
        netAmount = 200;
    }

    // Display output
    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitConsumed);
    printf("Charges per Unit: %.2f Ksh\n", chargesPerUnit);
    printf("Total Amount to Pay: %.2f Ksh\n", netAmount);

    return 0;
}
