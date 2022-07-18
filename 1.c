#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
//int sqaureroot(int a);
//q1 
int main() {
	double n1,n2,expres,sqrtres,logxres,log10res,fabsres,ceilres,floorres,powerres,fmodres;
	scanf_s("%lf %lf", &n1,&n2);
	expres = exp(n1);
	sqrtres = sqrt(n1);
	logxres = log(n1);
	log10res = log10(n1);
	fabsres = fabs(n1);
	ceilres=ceil(n1);
	floorres = floor(n1);
	powerres = pow(n1, n2);
	fmodres = fmod(n1, n2);
	printf("exp_res=%lf\n", expres);
	printf("sq=%lf\t log=%lf\t log10=%lf\t fabs=%lf\t ceil=%lf\t floor=%lf\t power=%lf\t  fmod=%lf\t", sqrtres, logxres, log10res, fabsres, ceilres, floorres, powerres, fmodres);
	return 0;
}
/*
int sqaureroot(int a) {
	int sqaure_res;
	sqaure_res = sqrt(a);
	return sqaure_res;
}
*/
	/*
	double hours,charge=2;
	scanf_s("%lf",&hours);
	if (hours <= 3)
		printf("total charge is:%.2f", charge);
		*/
	//else
	//{
		//double extra_hours = hours - 3,chrage_mulipler=0.5;
		  //extra_hours * chrage_mulipler;
		/*
		//extra_hours = abs(extra_hours);
		for (double i = 0; i <= extra_hours; i++) {
			charge *= 0.5;
		}
		*/
	//}
	//printf("%.2f", charge);
	//z = x & y;
	//printf("%d", z);
	//if(x&y)
		//printf("yes");
//}