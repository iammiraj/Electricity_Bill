// Electricity Bill
// According to DPDC Tariff Rate Published on March 1, 2020.

#include<stdio.h>

int main()

{
    int Unit, Phase, Service_Charge, Demand_Charge;
    float Rate, VAT, Electricity_Bill;

    // User input of unit
    printf("Enter Total Unit Consumed: ");
    scanf("%d",&Unit);

    printf("\nEnter Phase (1 or 3): ");
    scanf("%d", &Phase);

    //Service differs according to phase
    if (Phase==1)
        Service_Charge = 10;
    else
        Service_Charge = 30;

    //Demand Charge
    Demand_Charge = 15;

    // Rate differs according different range of unit
    if (Unit<=75&&Unit>=0)
        Rate = 4.19*Unit;

    else if (Unit<=200&&Unit>=76)
        Rate = 5.72*Unit;

    else if (Unit<=300&&Unit>=201)
        Rate = 6.00*Unit;

    else if (Unit<=400&&Unit>=301)
        Rate = 6.34*Unit;

    else if (Unit<=600&&Unit>=401)
        Rate = 9.94*Unit;

    else if (Unit>=601)
        Rate = 11.46*Unit;

    // 5% VAT is added
    VAT = 0.05*Rate;

    // Total Payable Bill
    Electricity_Bill = Rate + Service_Charge + Demand_Charge + VAT;
    printf("\nYour Electricity Bill is : %f Taka\n",Electricity_Bill);

    return 0;

}
