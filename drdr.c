#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>
int main() {
	int S = 5;
	int a[S] = { 11,4,7,3,2 };
	int total = 0;
	printf( "%s%13s%17s\n", "Element", "Value", "Histogram" );
 	for (int i = 0; i < S; i++) {
 	    printf( "%7d%13d ", i, a[ i ]) ; 
 	    char x[a[i]];
 	    for(int j=1;j<=a[i];j++){
 	        x[j]='*';
 	    }
 	    for(int e=0;e<a[i];e++){
 	        printf("%c",x[e]);
 	    }
 	}
 }



//int main() {
//	int a[SIZE], total = 0,n;
//	for (int i = 0; i < SIZE; i++) {
//
//		a[i]
//
//	}
//
//
//}
/*
int main() {
	int x[5] = {0}, a[5] = { 2,1,1,4,12 }, j = 0;
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		while (j < sizeof(a) / sizeof(a[0]))
		{
			if (a[i] = a[j]&& i!=j) {
				++x[a[i]];
			}
			j++;
		}
	}
	for (int s = 0; s < sizeof(a) / sizeof(a[0]); s++) {
		printf("%d  ", x[s]);
	}
	//printf("%d", count);
}
*/
//int main() {
//	int a[100],x[100],element,sum=0,n;
//	printf("enter number of array elemtns:  ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++) {
//		printf("enter element%d:  ", i + 1);
//		scanf_s("%d", &element);
//		a[i] = element;
//		sum += a[i];
//		x[i] = a[i];
//		printf("array copy is:%d", x[i]);
//	}
//	printf("the sum is %d", sum);
//}

//int main() {
//	int* x, z[5] = {0}, a[5] = { 44,55,23,12,-1 };
//	x = &a[0];
//	for (int i = 1; i < sizeof(a) / sizeof(a[0]); i++) {
//		if (a[i] < *x)
//		{
//			*x = a[i];
//
//		}
//	}
//	z[0] = *x;
//	int j, e;
//	for (j=1,e=0; j<=4; e++,j++)
//	{
//
//
//	}
//}
/*
int main() {
	//int a[] = { 1,2,3,5,4 }, * p = &a[3], * q = &a[4]; printf("%d\n", *p >= *q);
	int a[100], i, num_ele, ele,j=0;
	printf("enter num of ele: ");
	scanf_s("%d", &num_ele);
	for (i=0; i < num_ele; i++) {
		printf("enter ele%d:\n", i + 1);
		scanf_s("%d", &ele);
		*(a + i) = ele;
	}
	while (j<num_ele)
	{
		printf("the ele is %d\n", a[j]);
		j++;
	}
}
*/
/*
double day_to_year_week_month(double *day,double *week,double *month,double *year) {
	*week = *day / 7;
	*year = *day / 365;
	*month = *day / 30.417;
	return *week, *month,*year;
}
int main() {
	double a,mon=0,ye=0,wee=0;
	printf("enter num of days:\t");
	scanf_s("%lf", &a);
	day_to_year_week_month(&a,&wee,&mon,&ye);
	printf("%lf %lf %lf",wee,mon,ye);
	return 3;
}
*/
/*
double area_of_equaliteral(double a) {
	double area,frac;
	frac = sqrt(3) / 4;
	area = frac * pow(a, 2);
	return area;
}
int main() {
	double n1;
	scanf_s("%lf", &n1);
	printf("area=%lf", area_of_equaliteral(n1));
	return 2;
}
*/
/*
double sum(double a,double b){
	double summation;
	summation = a + b;
	return summation;
}
int main() {
	double n1, n2, summer;
	printf("enter two nums:\t");
	scanf_s("%lf %lf", &n1, &n2);
	//summer = sum(n1, n2);
	printf("the sum is:%.4lf",sum(n1,n2));

}
*/