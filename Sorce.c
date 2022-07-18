#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
int main() {
	unsigned int x, y, z1, z2;
	char ch = ' ';
	while (ch != 27)
	{
		cout << "Enter X:";
		cin >> x;
		cout << "Enter y:";
		cin >> y;
		z1 = x | y;
		z2 = x || y;
		printf("%x | %x = %x\n", x, y, z1);
		printf("%x || %x = %x\n", x, y, z2);
		cout << "\npress any key to continue, press esc 
			to exit, ..\n";
			ch = getch();
	}
	cout << "\npress eny key then press return to 
		exit";
		getch();
}
///////////////program to mulltipy each row of the array/////////////////////////
//int main() {
//	int x[10][10], n_row, n_column, multiplier = 1, d[10] = {0};
//	printf("please enter the numebr of rows: ");
//	scanf("%d", &n_row);
//	printf("please enter the numebr of columns:\n");
//	scanf("%d", &n_column);
//	for (int i = 0; i < n_row; i++)
//	{
//		for (int j = 0; j < n_column; j++) {
//			printf("enter element%d:\n", j + 1);
//			scanf("%d", &x[i][j]);
//			multiplier *= x[i][j];
//		}
//		d[i] = multiplier;
//		multiplier = 1;
//	}
//	for (int xx = 0; xx < n_row; xx++)
//	{
//		printf("the appended multiplied array elements of each row are: %d\n", d[xx]);
//	}
//
//}