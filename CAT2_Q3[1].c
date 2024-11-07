#include <stdio.h>



int main() {

    float hours;

    float hourlyWage;

    float grossPay;

    float taxes;

    float netPay;

    float salary; 

    float overtimePay = 0.0;



    printf("Enter hours worked in a week: ");

    scanf("%f", &hours);

    printf("Enter hourly wage: ");

    scanf("%f", &hourlyWage);



    if (hours > 40) {

        salary = 40 * hourlyWage;

        overtimePay = (hours - 40) * hourlyWage * 1.5;

    } else {

        salary = hours * hourlyWage;

    }

    

    grossPay = salary + overtimePay;



    if (grossPay <= 600) {

        taxes = grossPay * 0.15;

    } else {

        taxes = 600 * 0.15 + (grossPay - 600) * 0.20;

    }

    netPay = grossPay - taxes;



    printf("The Gross Pay: $%.4f\n", grossPay);

    printf("The Taxes: $%.4f\n", taxes);

    printf("The Net Pay: $%.4f\n", netPay);



    return 0;

}