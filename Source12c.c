#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int n,x[50],element,sum=0;
	scanf_s("%d\n", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d ", &element);
		x[i] = element;
		sum += x[i];
	}
	printf("sum is:%d", sum);
}
//void update(int* a, int* b) {
//	int sum,difference;
//	difference = *a - *b;
//	difference = abs(difference);
//	sum = *a + *b;
//	*a = sum;
//	*b = difference;
//}
//int main() {
//	int num1, num2;
//	int* p1=&num1, * p2=&num2;
//	scanf_s("%d\n%d", &num1, &num2);
//	update(p1,p2);
//	printf("a:%d\nb:%d",num1,num2);
//}
//int max_of_four(int a, int b, int c, int d) {
//	int list[] = { a,b,c,d },*max=list;
//	for (int i = 0; i < 4; i++)
//	{
//		if (list[i] > * max) {
//			*max = list[i];
//		}
//	}
//	return *max;
//}
//void main() {
//	int num1, num2, num3, num4;
//	printf("enter four nums: ");
//	scanf_s("%d\n%d\n%d\n%d\n", &num1, &num2, &num3, &num4);
//	int maximum = max_of_four(num1, num2, num3, num4);
//	printf(" the biggest number is :%d", maximum);
/////////////////////////////////////////////////
	/*char num1[] = "12", num2[] = "32";
	int number1, number2,sum;
	number1 = atoi(num1);
	number2 = atoi(num2);
	sum = number1 + number2;
	printf("sum is:%d",sum);*/
////////////////////////////////////////////////////////
	/*char x[1][7],s[]="where is my friend";
	int z = 0;
	for (int i = 0; s[i]!=' '; i++)
	{
		x[0][i] = s[i];
	}
	printf("%s", x[0]);*/
/////////////////////////////////////
	/*for (int i = 0,j=0 ;i<strlen(s); i++,j++)
	{
		if (s[i]==' ')
		{
			z += 1;
			i += 1;
		}
		x[z][j] = s[i];
	}
	for (int k = 0; k < strlen(x) ; k++)
	{
		printf("%s ", x[k]);
	}*/
///////////////////////////////////////////////////////
	//char x[10]="heles", y[10]="heless";
	//int fl = 0,longer=0;
	//if (strlen(x)>strlen(y)) {
	//	for (int j = 0; y[j] != '\0'; j++)
	//	{
	//		if (x[j] < y[j])
	//		{
	//			fl = -1;
	//			break;
	//		}
	//		else if (x[j] > y[j])
	//		{
	//			fl = 1;
	//			break;
	//		}
	//		longer = 1;
	//	}
	//}
	//else if (strlen(x) < strlen(y)) {
	//	for (int n = 0; x[n] != '\0'; n++)
	//	{
	//		if (x[n] < y[n])
	//		{
	//			fl = -1;
	//			break;
	//		}
	//		else if (x[n] > y[n])
	//		{
	//			fl = 1;
	//			break;
	//		}
	//		longer = -1;
	//	}

	//}
	//else
	//{
	//	for (int i = 0; x[i] != '\0'; i++)
	//	{
	//		if (x[i] < y[i])
	//		{
	//			fl = -1;
	//			break;
	//		}
	//		else if (x[i] > y[i])
	//		{
	//			fl = 1;
	//			break;
	//		}
	//	}
	//}
	//
	//if (fl==1 && longer==1)
	//{
	//	printf("string 1 is bigger than str 2 and its length is bigger than 2");
	//}
	//else if (fl==-1 && longer==-1)
	//{
	//	printf("string 1 is smaller than str 2 and its length is shorter than 2");
	//}
	//else if (longer == 0 && fl == 1) {
	//	printf("string 1 is bigger than str 2 but they have same lengths");
	//}
	//else if (longer==0 && fl==-1)
	//{
	//	printf("string 1 is smaller than str 2 but they have the same length");
	//}
	//else if (longer==-1 && fl==1)
	//{
	//	printf("string 1 is bigger but smaller in length than str 2");
	//}
	//else if (longer == -1 && fl == -1) {
	//	printf("str 1 is smaller and smaller in length than str 2");
	//}
	//else if (longer == 1 && fl == -1) {
	//	printf("str 1 is longer in length but smaller than str 2 ");
	//}
	//else if (longer == 1 && fl == 1) {
	//	printf("str 1 is longer in length and bigger than str 2 ");
	//}
	//else
	//{
	//	printf("the two strings are the same and have the same length");
	//}// missing two condtions or more who fucking knows 


	////////////////////////////////////////////////////
	/*char x[30] = "hel77 3to you4";
	int c_d = 0, c_alp = 0;
	for (int i = 0; x[i] != '\0'; i++){
		if (x[i] >= 65 && x[i] <= 122)
		{
			c_alp += 1;
		}
		else if (x[i] >= 48 && x[i] <= 57)
		{
			c_d += 1;
		}
	}
	printf("number of digits is:%d\nnumber of alpha is:%d", c_d, c_alp);
	*/
	////////////////////////////////////////
	//char str[10],g[10]="jukes";
	//sprintf_s(str, "the output is:%s", g);
	//strcpy_s(str,10, g);
	//puts(str);
	/*int x[5];
	for (int i = 0; i<5; i++) {
		scanf_s("%d\n",&x[i]);
	}
	for (int j = 0; j <5; j++)
	{
		printf("%d", x[j]);
	}*/
//}



	//char x[] = "hello";
	//for (int i = strlen(x)-1; i >= 0; i--) {
		//printf("%c\n", x[i]);
		//printf("the ascii code of this char is:%d\n", x[i]);
	//}
	/*
	char fruits[][8] = { "2apples","3banaa","nono","zozo" };
	char* ptr;
	int size = sizeof(fruits) / sizeof(fruits[0]),i=1;
	//printf("size is:%d", size);
	for (ptr=&fruits[0][0]; ptr<=&fruits[0][20]; ptr++)
	{
		*ptr= '5';
		printf("ele%d:%c\n",i,*ptr);
		i++;
	}
	*/

	//printf("%d", strlen(fruits[0]));
	/*
	for (int j = 0; j < strlen(fruits[0]); j++)
	{
		printf("%c ", fruits[0][j]);
	}
	*/