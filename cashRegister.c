
#include<stdio.h> 

int main(void) {
	
	int loonies;
	int quarters;
	int dimes;
	int nickel;
	int pennies;
	double balance_owning;
	double balance, GST_cal, amount_needed;
		
	printf("Please enter the amount to be paid $");
	scanf_s("%lf", &amount_needed);
	
	GST_cal = amount_needed * 0.13 + 0.005;
	printf("GST: %.2lf \n", GST_cal);
	
	balance_owning = GST_cal + amount_needed;
	printf("Total balance after GST: $%.2lf\n", balance_owning);

	
	loonies = (int)balance_owning;
	balance = balance - loonies;
	printf("loonies required: %d, balance owing $%.2lf\n", loonies, balance);

	balance = balance + 0.005;
	balance = balance * 100;
	tBalance = (int)balance; 

	
	quarters = tBalance / 25;
	tBalance = tBalance % 25;
	balance = (double)tBalance;
	printf("quarters required: %d, balance owing: $%.2lf\n", quarters, balance / 100);

	//calculating dimes and the remaining balance
	dimes = tBalance / 10; //
	tBalance = tBalance - dimes * 10;
	printf("dimes required: %d, balance owing: $%.2lf\n", dimes, balance / 100);

	//calculating nickel and the remaning balance
	nickel = tBalance / 5;//
	tBalance = tBalance - nickel * 5;
	balance = (double)tBalance;
	printf("nickel required: %d, balance owing: $%.2lf\n", nickel, balance / 100);

	//calculating pennies and the remaning balance
	pennies = tBalance / 1;
	tBalance = tBalance - pennies * 1;
	balance = (double)tBalance;
	printf("pennies required: %d, balance owing: $%.2lf", pennies, balance / 100);

	return 0;
}
