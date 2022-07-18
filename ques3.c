#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
/*
double total_charge(int hours) {
	double charge = 2,fee=0.5;
		if(hours <= 3) {
			return charge;
	}
		else {
			charge = (hours - 3) * fee + 2;
			if (charge>10)
			{
				return 10;
			}
			else
			{
				return charge;
			}
		}
}
int main() {
	double x;
	int i;
	double total_charges = 0, total_hours = 0;
	for (i = 1; i <= 3; i++) {
		printf("enter number of hours:\n");
		scanf_s("%lf", &x);
		printf(" number of charges is:%.2lf\n", total_charge(x));
		total_hours += x;
		total_charges += total_charge(x);
	}
	printf("total charge=%.2lf$\n", total_charges);
	printf("total hours=%.2lf\n", total_hours);

	return 0;
	
}
*/
double calc_charge(int hours) {
	double charge = 2, fee = 0.5;
	if (hours <= 3) {
		return charge;
	}
	else {
		charge = (hours - 3) * fee + 2;
		if (charge > 10)
		{
			return 10;
		}
		else
		{
			return charge;
		}
	}
}
int main() {
	double x;
	int i;
	double total_charges = 0, total_hours = 0;
	for (i = 1; i <= 3; i++) {
		printf("enter number of hours:\n");
		scanf_s("%lf", &x);
		printf(" number of charges is:%.2lf\n", calc_charge(x));
		total_hours += x;
		total_charges += calc_charge(x);
	}
	printf("total charge=%.2lf$\n", total_charges);
	printf("total hours=%.2lf\n", total_hours);

	return 0;

}