#include <stdio.h>

int main() {
    double balance, annualInterestRate, monthlyInterestRate, minMonthlyPayment, monthlyUnpaidBalance, updatedBalance;
    printf("Enter the outstanding balance on the credit card: ");
    scanf("%lf", &balance);
    printf("Enter the annual interest rate as a decimal: ");
    scanf("%lf", &annualInterestRate);

    monthlyInterestRate = annualInterestRate / 12.0;
    minMonthlyPayment = 0;
    updatedBalance = balance;

    while (updatedBalance > 0) {
        minMonthlyPayment += 10;
        updatedBalance = balance;
        for (int i = 0; i < 12; i++) {
            monthlyUnpaidBalance = updatedBalance - minMonthlyPayment;
            updatedBalance = monthlyUnpaidBalance + (monthlyInterestRate * monthlyUnpaidBalance);
        }
    }

    printf("Lowest Payment: %.2lf\n", minMonthlyPayment);
    return 0;
}
