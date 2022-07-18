#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>
 #include <stdio.h>
 #define SIZE 99
void stan_dev(int g[SIZE], double mean) {
	double s = 0,d;
	for (int i = 0; i < SIZE; i++)
	{
		d = pow(g[i] - mean, 2);
		s += d;
	}
	double variance, standard_dev;
	variance = s / SIZE;
	standard_dev = pow(variance, 0.5);
	printf("the var is:%lf----the standard deviation is:%lf", variance, standard_dev);
}

 float mean(const int answer[]);
 void median(int answer[]);
 void mode(int freq[], const int answer[]);
 void bubbleSort(int a[]);
 void printArray(const int a[]);

 int main()
 {
	 int frequency[10] = { 0 }; /* initialize array frequency */

		 int response[SIZE] =
		 { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
		 7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
		 6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
		 7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
		 6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
		 7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
		 5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
		 7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
		 7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
		 4, 5, 6, 1, 6, 5, 7, 8, 7 };
		 /* process responses */
	double xy=mean(response);
	 median(response);
	 mode(frequency, response);
	 stan_dev(response, xy);
	 return 0; /* indicates successful termination */

	 } /* end main */
	 /* calculate average of all response values */
	 float mean(const int answer[])
	 {
	 int j; /* counter */
	 int total = 0; /* variable to hold sum of array elements */
	
		 printf("%s\n%s\n%s\n", "********", " Mean", "********");
	
		 /* total response values */
		 for (j = 0; j < SIZE; j++) {
		 total += answer[j];
	
	} /* end for */

	 printf("The mean is the average value of the data\n"
			 "items. The mean is equal to the total of\n"
			 "all the data items divided by the number\n"
			 "of data items ( %d ). The mean value for\n"
			 "this run is: %d / %d = %.4f\n\n",
			 SIZE, total, SIZE, (double)total / SIZE);
	 return (float)total / SIZE;
	 }
	 /* end function mean */
	 /* sort array and determine median element's value */
	 void median(int answer[])
	 {
	 printf("\n%s\n%s\n%s\n%s",
		 "********", " Median", "********",
		 "The unsorted array of responses is");
	
		 printArray(answer); /* output unsorted array */
	
		 bubbleSort(answer); /* sort array */
	
		 printf("\n\nThe sorted array is");
	 printArray(answer); /* output sorted array */
	
		 /* display median element */
		 printf("\n\nThe median is element %d of\n"
			 "the sorted %d element array.\n"
			 "For this run the median is %d\n\n",
			 SIZE / 2, SIZE, answer[SIZE / 2]);
	 } /* end function median */
	 /* determine most frequent response */
	 void mode(int freq[], const int answer[])
	 {
	 int rating; /* counter */
	 int j; /* counter */
	 int h; /* counter */
	 int largest = 0; /* represents largest frequency */
	 int modeValue = 0; /* respesents most frequent response */
		 printf("\n%s\n%s\n%s\n",
			 "********", " Mode", "********");
		for (rating = 1; rating <= 9; rating++) {
		 freq[rating] = 0;
	
	} /* end for */
		for (j = 0; j < SIZE; j++) {
++freq[answer[j]];
	}
		 printf("%s%11s%19s\n\n%54s\n%54s\n\n",
			 "Response", "Frequency", "Histogram",
			 "1 1 2 2", "5 0 5 0 5");

		 for (rating = 1; rating <= 9; rating++) {
		 printf("%8d%11d ", rating, freq[rating]);
			 /* keep track of mode value and largest frequency value */
			 if (freq[rating] > largest) {
			 largest = freq[rating];
			 modeValue = rating;
		} /* end if */
	
			 /* output histogram bar representing frequency value */
			 for (h = 1; h <= freq[rating]; h++) {
			printf("*");
		} /* end inner for */
		
			 printf("\n"); /* being new line of output */
	} 
		 /* display the mode value */
		 printf("The mode is the most frequent value.\n"
			 "For this run the mode is %d which occurred"
			 " %d times.\n", modeValue, largest);
	 } /* end function mode */

 /* function that sorts an array with bubble sort algorithm */
 void bubbleSort(int a[])
 {
 int pass; /* counter */
 int j; /* counter */
	 int hold; /* temporary location used to swap elements */
		 /* loop to control number of passes */
		 for (pass = 1; pass < SIZE; pass++) {
			 for (j = 0; j < SIZE - 1; j++) {
			if (a[j] > a[j + 1]) {
				hold = a[j];
				a[j] = a[j + 1];
				a[j + 1] = hold;
			} 
		} 
	} 
} 
 void printArray(const int a[])
 {
	int j; 
		 for (j = 0; j < SIZE; j++) {

			 if (j % 20 == 0) { 
			 printf("\n");
		} 
		
			 printf("%2d", a[j]);
		
	} 
	
		 }
 