#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
int main() {
  
}
////another form of reverse fucntion//////////////////
//void main() {
//    int x[6] = { 1,2,3,4,5,6};
//    int counter = 0, swap, length = sizeof(x) / sizeof(x[0]);
//    if (length%2==0)
//    {
//        for (int i = 0, z = length - 1; counter != length / 2; i++, z--)
//        {
//            swap = x[i];
//            x[i] = x[z];
//            x[z] = swap;
//            counter++;
//        }
//    }
//    else
//    {
//        int middle_num = length / 2;
//        for (int i = 0,z=length-1; i!= middle_num && z!= middle_num; i++,z--)
//        {
//            swap = x[i];
//            x[i] = x[z];
//            x[z] = swap;
//        }
//    }
//    
//    printf("\nthe elemnts are :");
//    for (int j = 0; j < length; j++)
//    {
//        printf("%d ", x[j]);
//    }
//}
//void main() {
//    char x[300], letters[50] = "abcdefghijklmnopqrstuvwxyz";
//    printf("enter string: ");
//    scanf("%[^\n]300s", x);
//    fseek(stdin, 0, SEEK_END);
//    int length = strlen(x),c=97;
//    char g = 'a';
//    if (g==c)
//    {
//        printf("yes");
//    }
//    else
//    {
//        printf("no");
//    }
//}
//////this program finds the nth fibo number(incomplete program////
//void main() {
//    int n,swap,a,b,sum;
//    printf("enter the order of the number in the fibonacci series: ");
//    scanf("%d", &n);
//    fseek(stdin, 0, SEEK_END);
//    if (n==1)
//    {
//        printf("%d", 1);
//    }
//    else if (n == 2) {
//        printf("%d", 1);
//    }
//    else if(n>2)
//    {
//        a = 1;
//        b = 1;
//        sum = 0;
//
//    }
//}
//small program to return two values instead of just one////
//int multiple_values(int a, int b) {
//    return a, b;
//}
//void main() {
//    //the array can't hold more than 2 variables at a time//
//    int x, y;
//    printf("enter two values: ");
//    scanf("%d%d", &x, &y);
//    fseek(stdin, 0, SEEK_END);
//    multiple_values(x, y);
//    int arr[2];
//    arr[0] = x;
//    arr[1] = y;
//    printf("%d--%d", arr[0], arr[1]);
//}
///////program to find the sum of all elements which are divisble by 2 or 3(using functions)///////////
//int multiples_of_3_and_2(int a[],int size) {
//    int sum=0;
//    for (int i = 0; i < size; i++) {
//        if (a[i]%2==0 || a[i]%3==0)
//        {
//            sum+=a[i];
//        }
//    }
//    return sum;
//}
//void main() {
//    int x[100] = { 0 }, size_arr,element;
//    printf("enter the size of the array:  ");
//    scanf("%d", &size_arr);
//    fseek(stdin, 0, SEEK_END);
//    for (int i = 0; i < size_arr; i++)
//    {
//        printf("\nenter element%d: ", i + 1);
//        scanf("%d", &element);
//        fseek(stdin, 0, SEEK_END);
//        x[i] = element;
//    }
//    int result = multiples_of_3_and_2(x, size_arr);
//    printf("sum =%d bitch :)", result);
//}
/////////////////////
////program to remove duplicate consecutive letters(to be continued)///
//void main() {
//    char x[15] = "xxxyyzz";
//    int last_ele = strlen(x) - 1,swap;
//    for (int i = 0; x[i] != '\0'; i++)
//    {
//        if (x[i]==x[i+1])
//        {
//            for (int j = i + 1; x[j] != '\0'; j++) {
//                swap = x[j];
//                x[j] = x[j + 1];
//                x[j + 1] = swap;
//                if (j==last_ele)
//                {
//                    x[j] = '\0';
//                }
//            }
//            i = 0;
//        }
//    }
//    printf("%s", x);
//}
/////alternatives problem//////////////// 
//void main() {
//    int x[6] = { 4,3,2,-3,-2,-4 }, size_array = 6, postive[100] = { 0 }, negative[100] = { 0 },c_p=0,c_n=0,z=0,swap;
//    for (int i = 0; i < size_array; i++)
//    {
//        if (x[i]<0)
//        {
//            negative[z] = x[i];
//            c_n += 1;
//            z += 1;
//        }
//        else
//        {
//            postive[i] = x[i];
//            c_p += 1;
//        }
//    }
//    for (int j = 0; j < size_array; j++)
//    {
//        x[j] = 0;
//    }
//    int ty = 1,f=0,ty2=1,f2=0,swap2;
//    for (int i = 0; i < c_n; i++)
//    {
//        while (ty != 0) {
//            if (abs(negative[ty])<abs(negative[f]))
//            {
//                swap = negative[f];
//                negative[f] = negative[ty];
//                negative[ty] = swap;
//            }
//            ty--;
//            f--;
//        }
//        ty = i + 1;
//        f = i;
//    }
//    for (int i = 0; i < c_n; i++)
//    {
//        while (ty2 != 0) {
//            if (abs(postive[ty2]) < abs(postive[f2]))
//            {
//                swap2 = postive[f2];
//                postive[f2] = postive[ty2];
//                postive[ty2] = swap2;
//            }
//            ty2--;
//            f2--;
//        }
//        ty2 = i + 1;
//        f2 = i;
//    }
//    for (int ww = 0,jj=1,hy=0; jj < size_array ; ww+=2,jj+=2,hy++)
//    {
//        x[ww] = postive[hy];
//        x[jj] = negative[hy];
//    }
//    for (int k = 0; k < size_array; k++)
//    {
//        printf("%d ", x[k]);
//    }
//}
/////program to check whether the array has consecutive numbers or not /////////////
//void main() {
//    int x[4] = {78,79,81,81},swap,f=0,j=1,flag=0;
//    for (int i = 0; i < 4; i++)
//    {
//        while (j!=0)
//        {
//            if (x[j]<x[f]) {
//                swap = x[f];
//                x[f] = x[j];
//                x[j] = swap;
//            }
//            j--;
//            f--;
//        }
//        j = i + 1;
//        f = i;
//    }
//    for (int r = 0; r < 4; r++)
//    {
//        int z = r + 1;
//        if (z>3)
//        {
//            break;
//        }
//        if (abs(x[r]-x[z])>1 || abs(x[r] - x[z])==0)
//        {
//            flag=1;
//            break;
//        }
//    }
//    if (flag==1)
//    {
//        printf("not consecutive");
//    }
//    else
//    {
//        printf("consecutive");
//    }
//  /*  for (int k = 0; k < 6; k++)
//    {
//        printf("%d ", x[k]);
//    }*/
//
//}
////////////////////////////////////
//void main() {
//    int n,sum=1;
//    printf("enter a number: ");
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        if (i>1)
//        {
//            sum += 2;
//        }
//        //printf("%d\n", sum);
//        for (int j = 1; j <= sum; j++)
//        {
//            if (j==1 && i<n)
//            {
//                printf(" ");
//            }
//
//            printf("*");
//        }
//        printf("\n");        
//    }
//}
//void main() {
//    int n=3,rows = 3,reset=0;
//    for (int i = 1; i < rows+1; i++)
//    {
//        printf("%d", rows);
//    }
//    printf("\n");
//    for (int  j = 1; j < rows; j++)
//    {
//        for (int  z = 1; z < rows+1; z++)
//        {
//            int reducer;
//            if (reset<z)
//            {
//                reducer = z;
//                rows -= reducer;
//                reducer--;
//                reset++;
//                printf("%d", rows);
//            }
//            rows = n;
//            printf("%d", rows);
//        }
//        reset = 0;
//        printf("\n");
//    }
//}
//////give me traingle pattern//////////////////
//void main() {
//    int n;
//    char x = '*';
//    printf("enter a number: ");
//    scanf("%d", &n);
//    for (int i = n; i > 0; i--)
//    {
//        for (int j = i; j > 0; j--)
//        {
//            printf("%c",x);
//        }
//        printf("\n");
//    }
//}
//////print in sine wave/////////////////////
//void main() {
//    int row = 5, column = 6, i = 0, j = 0, key = 0;
//    int x[5][6] = { {2,7,6,5,4,3},
//                  {13,2,9,8,12,11},
//                  {14,20,3,9,1,10},
//                  {16,15,20,5,30,7},
//                  {10,14,23,22,20,19} };
//    while (key<column)
//    {
//        if (key % 2 == 0) {
//            while (i<=row-1)
//            {
//                printf("%d ", x[i][j]);
//                if (i==5)
//                {
//                    break;
//                }
//                i++;
//            }
//        }
//        else if(key%2 !=0)
//        {
//            while (i>=0)
//            {
//                if (i-1>=0)
//                {
//                    printf("%d ", x[i-1][j]);
//                }
//                if (i==0)
//                {
//                    break;
//                }
//                i--;
//            }
//        }
//        if (i==5 || i==0)
//        {
//            key++;
//            j++;
//        }
//    }
//}
//////////////////////////
//void main() {
//    char x[15] = "hello friend";
//    int d[5] = { 0 };
//    for (int i = 0; x[i] != '\0'; i++)
//    {
//        //printf("%c\n", x[i]);
//       // printf("%c\n", d[i]);
//        if (x[i]=='l')
//        {
//            d[i] = i;
//        }
//        /*for (int j = 0; j < strlen(x); j++)
//        {
//            if
//        }*/
//
//    }
//    for (int a = 0; a < sizeof(d)/sizeof(d[0]); a++)
//    {
//        printf("%d", d[a]);
//    }
//}
///
//void main() {
//    char x[20] = "aDcadhc", d[20] = { 0 };
//    int i = 0,flag=0,z=1;
//    while (i < strlen(x)&& z < strlen(x))
//    {
//        if (x[i] == x[z]) {
//
//            continue;
//
//        }
//        z += 1;
//        /*if (z==strlen(x))
//        {
//            z = i + 1;
//            i++;
//            continue;
//        }*/
//    }
//}
////
//int main() {
//    int r = 5, c = 6,key1=0,key1_i=0,key2=1,key2_i=c-1,key3=r-1,key3_i=c-2;
//    int x[5][6] = {{2,7,6,5,4,3},
//                   {13,2,9,8,12,11},
//                   {14,20,3,9,1,10},
//                   {16,15,20,5,30,7},
//                   {10,14,23,22,20,19}};
//    while (1)
//    {
//        while (key1_i<c)
//        {
//            printf("%d ", x[key1][key1_i]);
//            key1_i++;
//        }
//        key1++;
//        //key1_i++;
//        while (key2<r)
//        {
//            printf("%d ", x[key2][key2_i]);
//            key2++;
//        }
//        while (key3_i>=0)
//        {
//            printf("%d ", x[key3][key3_i]);
//            key3_i--;
//        }
//
//    }
//       
//}
/////insertion sort/////////////////
//void main() {
//    int x[5] = {7,8,-1,3,9},swap,f=0,j=1;
//    for (int i = 0; i < 5; i++)
//    {
//        while (j!=0)
//        {
//            if (x[j]<x[f]) {
//                swap = x[f];
//                x[f] = x[j];
//                x[j] = swap;
//            }
//            j--;
//            f--;
//        }
//        j = i + 1;
//        f = i;
//    }
//    for (int k = 0; k < 5; k++)
//    {
//        printf("%d ", x[k]);
//    }
//}
//////////////////////////////////////
//void main() {
//    char x[] = "HEllo";
//    int d[6] = { 0 };
//    for (int i = 0; i < 6; i++)
//    {
//        if (x[i] < 0) {
//            d[i] = i;
//        }
//    }
//    for (int  j = 0; j < sizeof(d)/sizeof(d[0]); j++)
//    {
//        printf("%d ", d[j]);
//    }
//}
//////////////////cisear cipher encryption only///////////////////////////
//void main(){
//    char x[500];
//    int shift, difference, difference2, j = 0;
//    printf("enter string: ");
//    scanf("%[^\n]500s", x);
//    fseek(stdin, 0, SEEK_END);
//    char x2[500];
//    //printf("%s",x);
//    printf("\nenter how many times you want the letter to be shifted: ");
//    scanf("%d", &shift);
//    fseek(stdin, 0, SEEK_END);
//    printf("\nunencrypted string:%s", x);
//    for (int z = 0; x[z]!= '\0'; z++)
//    {
//            x2[z] = x[z];
//    }
//    while(x[j]!='\0')
//    {
//        if (x[j] >= 97 && x[j] <= 122) {
//            x[j] -= 32;
//        }
//        j++;
//    }
//    for (int i = 0; x[i] != '\0'; i++)
//    {
//        if (x[i] >= 65 && x[i] <= 90) {
//            x[i] += shift;
//            if (x[i] >= 91 && x[i] <= 96)
//            {
//                difference = x[i] - 90;
//                x[i] -= difference;
//                x[i] -= 25;
//                x[i] += difference;
//                x[i] -= 1;
//            }
//
//            else if (x[i] > 96) {
//                difference = x[i] - 90;
//                difference2 = x[i] - 65;
//                x[i] -= difference2;
//                x[i] += difference;
//                x[i] -= 1;
//
//            }
//        }
//    }
//    for (int b = 0; x[b] != '\0'; b++) {
//        if (x2[b]>=97 && x2[b]<=122)
//        {
//            x[b] += 32;
//        }
//    }
//    printf("\nencrypted string:%s", x);
//} 
//////product sum program//////////////
//void main() {
//        int x[] = { 9, 3, 4, 2 }, sum = 0, z, total = 0;
//        for (int i = 0; i < 4; i++) {
//            for (int j = i + 1; j < 4; j++) {
//                z = x[i] * x[j];
//                sum += z;
//            }
//            total += sum;
//            sum = 0;
//        }
//        printf("total is:%d", total);
//}
//////incompelte program//////////////////
//void main() {
//    int x[6] = { 8,7,5,10,3,2 }, swap1, swap2;
//    for (int i = 1; i <=5; i++)
//    {
//        if (x[i] < x[0]) {
//            swap1 = x[0];
//            x[0] = x[i];
//            x[i] = swap1;
//        }
//
//    }
//    for (int j = 0; j < 6; j++)
//    {
//        printf("%d ", x[j]);
//    }
//  
//}
////////////////////////////
//void main() {
//    int x = 10, y = 22;
//    printf("%d", abs(x-y));
//}
/////////////find the min differnece//////////////
//void main() {
//    int x[4] = { 30, 5, 20, 9 }, min_difference = 64848671;
//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = 0; j < 4; j++) {
//            
//            if (j!=i)
//            {
//                if (abs(x[j]-x[i]) < min_difference)
//                {
//                    min_difference =abs(x[j]-x[i]);
//                }
//                //printf("\n%d ", abs(x[j]-x[i]));
//            }
//        }
//    }
//    printf("min diff: %d", min_difference);
//}
///////smae shit wokrs on online compiler better(array of pointers)/////
//void main() {
//    char* x[] = { "yes","hi","no" };
//    printf(" the first ele:%c------second ele:%s-----third ele:%s", x[0][1], x[1], x[2]);
//}
/////////////program to count vowels and constants//////////////////////////////////
//void main() {
//    char x[100] = "aeiiouy", v[6] = {'a','e','i','o','u','y'};
//    int constants , vowels = 0;
//    for (char *p=x; *p != '\0'; p++)
//    {
//        for (int i = 0; i < 6; i++)
//        {
//            if (*p == v[i]) {
//                vowels++;
//            }
//        }
//    }
//    constants = strlen(x) - vowels;
//    printf("constants:%d--vowels:%d", constants, vowels);
//}
/////////////program to change const intger(doenst work on vs rin it on online compiler)/////////////////
//void main(){
//    const int var = 10;
//    int* ptr;
//    ptr = &var;
//    *ptr = 12;
//    printf("var = %d\n", var);
//}
///////////////program to sort array in ascending order//////////////////////////
//void main() {
//    int x[5] = { 1,9,2,10,7 }, min = 1000000000, swap, index, swap_arr;
//
//    for (int j = 0; j < 5; j++)
//    {
//        if (x[j] < min)
//        {
//            min = x[j];
//            index = j;
//        }
//    }
//    //printf("%d", index);
//    if (index != 0)
//    {
//        swap = x[index];
//        x[index] = x[0];
//        x[0] = swap;
//    }
//    for (int s = 0; s < 4; s++) {
//        for (int i = 1; i < 4; i++)
//        {
//            if (x[i] > x[i + 1]) {
//                swap_arr = x[i + 1];
//                x[i + 1] = x[i];
//                x[i] = swap_arr;
//            }
//            else {
//                continue;
//            }
//        }
//    }
//    for (int f = 0; f < 5; f++)
//    {
//        printf("%d ", x[f]);
//    }
//}
///////////////////////////////////////////////////////////
//void main()
//{
//    int x[5] = { 1,3,2,8,9 }, swap_min, swap_max,swap, max = -10000, min = 10000, index_max, index_min, length = sizeof(x) / sizeof(x[0]);
//    for (int i = 0; i < 5; i++) {
//        if (x[i] > max) {
//            max = x[i];
//            index_max = i;
//
//        }
//        if (x[i] < min) {
//            min = x[i];
//            index_min = i;
//        }
//    }
//    if (index_max != length - 1) {
//        swap_max = x[index_max];
//        x[index_max] = x[length - 1];
//        x[length - 1] = swap_max;
//    }
//    if (index_min != 0) {
//        swap_min = x[index_min];
//        x[index_min] = x[0];
//        x[0] = swap_min;
//    }
//    for (int z = 1; z < length-1; z++)
//    {
//        if (x[z]>x[z+1])
//        {
//            swap = x[z + 1];
//            x[z] = x[z + 1];
//            x[z + 1] = swap;
//        }
//        else
//        {
//            continue;
//        }
//    }
//    for (int j = 0; j < 5; j++) {
//        printf("%d ", x[j]);
//
//    }
//
//    //   printf("min:%d-----max:%d",min,max);
//    //   printf("\nmin index:%d----max index:%d",index_min,index_max);
//}
//////////////////
//int main() {
//    int x[5] = { 5,7,1,9,4 }, y[6] = { 12,14,18,16,13,11 }, length_of_two = sizeof(x) / sizeof(x[0]) + sizeof(y) / sizeof(y[0]), z[100] = {0}, * p = y;
//    for (int i = 0; i < length_of_two; i++)
//    {
//        z[i] = x[i];
//        if (i>= sizeof(x) / sizeof(x[0]))
//        {
//            z[i] = *p;
//            p++;
//        }
//    }
//    for (int j = 0; j < length_of_two; j++)
//    {
//        printf("%d ", z[j]);
//    }
//}
///////////////////////////////////
//int main() {
//    int x[5] = {-8,-9,-5,-7,-3}, max1 = -77447373;
//    int max2 = -2823837;
//    for (int i = 0; i < 5; i++) {
//        if (x[i] > max1) {
//            max1 = x[i];
//        }
//    }
//    for (int j = 0; j < 5; j++) {
//        if (x[j] > max2&& x[j] != max1) {
//            max2 = x[j];
//        }
//    }
//    printf("second biggest number is :%d", max2);
//}
///////////////this program has smoee problems the code right above it wokrs better and its shorter///////////////
//int main() {
//    int x[50] = { 14,17,2,58,56 }, * max = x,length= sizeof(x) / sizeof(x[0]),swap,index,max_2=-100000000;
//    for (int i = 1; i < length-1; i++)
//    {
//        if (x[i]>*max)
//        {
//            *max = x[i];
//            index = i;
//        }
//    }
//    if (index==length-1)
//    {
//        for (int j = 0; j < index;j++) {
//            if (x[j]>max_2)
//            {
//                max_2 = x[j];
//            }
//        }
//        printf("second biggest elemnt is:%d", max_2);
//    }
//    else if(index<length-1)
//    {
//        swap = *max;
//        *max = x[length - 1];
//        x[length - 1] = swap;
//        //printf("\n%d", swap);
//        for (int y = 0; y < length-2; y++)
//        {
//            if (x[y] > max_2) {
//                max_2 = x[y];
//            }
//        }
//        printf("second biggest elemnt is:%d", max_2);
//        //printf("%d", x[length-1]);
//    }
//    
//
//
//}
///////////////////////////////////////
//int main() {
//    int number, base = 2,i=0;
//    printf("enter number: ");
//    scanf("%d", &number);
//    fseek(stdin, 0, SEEK_END);
//    while (1)
//    {
//        base = pow(2, i);
//        if (base >= number) {
//            printf("\nnumber of bits required to store integer: %d is %d bits",number, i);
//            break;
//        }
//        i++;
//    }
//}
/////////to be continued///////////////////
//int main() {
//    double x, binary_num[100] = {0}, i=0;
//    printf("enter number: ");
//    scanf("%lf", &x);
//    fseek(stdin, 0, SEEK_END);
//    while (1)
//    {
//        x /= 2;
//        if
//    }
//}
/////////to be continued thor games(desciosn excercises)/////////////
//int main() {
//    int intial_x, intial_y, light_x, light_y,number_of_turns=8,step_x,step_y;
//    printf("enter thor intial location of x and y coordinates: ");
//    printf("\nenter x_axis: ");
//    scanf("%d", &intial_x);
//    fseek(stdin, 0, SEEK_END);
//    printf("\nenter y_axis: ");
//    scanf("%d", &intial_y);
//    fseek(stdin, 0, SEEK_END);
//    printf("\n#####################################");
//    printf("\nenter coordinates of x and y of tower of light");
//    printf("\nenter x_axis of tower: ");
//    scanf("%d", &light_x);
//    fseek(stdin, 0, SEEK_END);
//    printf("\nenter y_axis of tower: ");
//    scanf("%d", &light_y);
//    fseek(stdin, 0, SEEK_END);
//    printf("\n#####################################");
//    int i = 0;
//    while (i<number_of_turns)
//    {
//        printf("\nenter the step of thor(warning thor moves only one cell at a time). 1 or -1 or 0");
//        printf("\nenter step in x-axis: ");
//        scanf("%d",&step_x);
//        fseek(stdin, 0, SEEK_END);
//        if (step_x>1 || step_x<-1)
//        {
//            printf("invalid input in x");
//            break;
//        }
//        printf("\nenter step in y-axis: ");
//        scanf("%d",&step_y);
//        fseek(stdin, 0, SEEK_END);
//        if (step_y > 1 || step_y < -1)
//        {
//            printf("invalid input in y");
//            break;
//        }
//        if (step_x==1)
//        {
//            intial_x += 1;
//
//        }
//        else if(step_x==-1)
//        {
//            intial_x -= 1;
//        }
//        if (step_y==1)
//        {
//            intial_y += 1;
//        }
//        else if (step_y == -1)
//        {
//            intial_y -= 1;
//        }
//        if (intial_x==light_x&&intial_y==light_y)
//        {
//            printf("\nyou won thor reched the tower");
//            break;
//        }
//        /*if ()
//        {
//
//        }
//
//        i++;
//    }*/
//
//}
///////////////////////////////
//int main() {
//    char x[20];
//    int d = 0;
//    printf("please enter a number(s): ");
//    scanf("%[^\n]20s", x);
//    fseek(stdin, 0, SEEK_END);
//    for (int i = 0; x[i]!='\0' ; i++)
//    {
//        x[i] -= 48;
//        d = x[i];
//    }
//    printf("\nvalues after coversion to integr: ");
//    printf("%d", d);
//}
////////program to find the closest to zero temp/////////// 
//int main() {
//    int x[100] = {0},closest=10000,n,t;
//    printf("enter the number of tempreatures you want to input: ");
//    scanf("%d", &n);
//    fseek(stdin, 0, SEEK_END);
//    for (int j = 0; j < n; j++)
//    {
//        printf("\nenter tempreature from -273 to 5526 and dont enter zero as tempreature fuck face this program finds temp nearest to zero many thanks in advance");
//        printf("\nenter tempreature%d: ", j + 1);
//        scanf("%d", &t);
//        fseek(stdin, 0, SEEK_END);
//        x[j] = t;
//    }
//    for (int i = 0; i <n; i++)
//    {
//        if (x[i]>=-273 && x[i]<=5526)
//        {
//            if (abs(x[i])==abs(closest))
//            {
//                closest = abs(x[i]);
//            }
//            else if (abs(x[i])<abs(closest))
//            {
//                closest = x[i];
//            }
//        }
//        else
//        {
//            printf("\ninvalid tempreature from -273 to 5526");
//            break;
//        }
//      
//
//    }
//    if (closest==10000)
//    {
//        printf("\nclosest is:%d", 0);
//    }
//    else
//    {
//        printf("\nclosest is:%d", closest);
//    }
//    
//}
/////////////////
//int main() {
//    int n, t, closest = 100000,flag;
//    printf("enter the number of integers: ");
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        flag = 0;
//        printf("\nenter tempreature from -273c -5526c:\n ");
//        scanf("%d", &t);
//        if (t<0 && i==n-1)
//        {
//            flag = 1;
//            t *= -1;
//        }
//        if (abs(t) < closest)
//        {
//            closest = t;
//            if (flag==1)
//            {
//                closest *= -1;
//            }
//        }
//       /* if (i==n-1)
//        {
//            if (closest < 0) {
//                closest *= -1;
//            }
//        }*/
//        
//    }
//   /* if (closest<0)
//    {
//        printf("closest is:%d", closest*-1);
//    }*/
//    printf("closest is:%d", closest);
//
//}

//int main() {
//    int x[5] = { 12,-2,-3,45,16 },*min=x;
//    for (int i = 1; i < 4; i++)
//    {   
//            if (x[i]<*min)
//            {
//                if (x[i]<0 && abs(x[i])==*min)
//                {
//                    //continue;
//                    *min = abs(x[i]);
//                }
//                else if (x[i]>0||x[i]<0)
//                {
//                    *min = x[i];
//                }
//
//            }
//            printf("%d ", *min);
//        
//    }
//
//    /*printf("the closest value to zero is:%d", *min);*/
//}
//////divide two intgers//////////////
//int main() {
//    int num, divisor,counter=0;
//    printf("this program is equvilanet to integral divsion");
//    printf("\nwarning divisor must never be zero");
//    printf("\nenter num: ");
//    scanf("%d", &num);
//    printf("\nenter divisor: ");
//    scanf("%d", &divisor);
//    if (num==divisor)
//    {
//        printf("\nthe result is:%d", 1);
//    }
//    else if (num>divisor && divisor<0)
//    {
//        divisor = abs(divisor);
//        int step = abs(divisor);
//        while (1)
//        {
//            if (divisor > num) {
//                break;
//            }
//            divisor += step;
//            counter++;
//        }
//        printf("\nthe result is:-%d", counter);
//    }
//    else if (num>divisor)
//    {
//        int step = divisor;
//        while (1)
//        {
//            if (divisor > num) {
//                break;
//            }
//            divisor += step;
//            counter++;
//        }
//        printf("\nthe result is:%d", counter);
//    }
//    else
//    {
//        printf("the result is:%d", 0);
//    }
//}
////////////q3/////////////////////////
//int main() {
//    char string[100], needle[50],*searchptr;
//    printf("enter string: ");
//    scanf("%[^\n]100s", string);
//    fseek(stdin, 0, SEEK_END);
//    printf("\nenter word : ");
//    scanf("%[^\n]50s", needle);
//    fseek(stdin, 0, SEEK_END);
//    searchptr = needle;
//    while (1)
//    {
//        searchptr = strstr(string, searchptr);
//        if (searchptr==NULL)
//        {
//            break;
//        }
//        printf("%s",searchptr);
//        searchptr++;
//
//    }
//
//}
////////////////////////////
/////////////////the sec problem(in strings)/////////////////////////
/*int main() {
    char w[100], x[100], y[100], z[100];
    int W, X, Y, Z,sum;
    printf("please enter the 1st string :\n");
    scanf("%[^\n]s", w);
    fseek(stdin, 0, SEEK_END);
    printf("\nplease enter the 2nd string :");
    scanf("%[^\n]s", x);
    fseek(stdin, 0, SEEK_END);
    printf("\nplease enter the 3rd string :");
    scanf("%[^\n]s", y);
    fseek(stdin, 0, SEEK_END);
    printf("\nplease enter the 4th string :");
    scanf("%[^\n]s", z);
    fseek(stdin, 0, SEEK_END);
    W = atoi(w);
    X = atoi(x);
    Y = atoi(y);
    Z = atoi(z);
    sum = W + X + Y + Z;
    printf("the sum is :%d", sum);

}*/
////////////////////////////////////////////
/////the first program(in strings problems)//////////
/*int main() {
    char s[100];
    printf("please enter the line of text:\n");
    scanf("%[^\n]s", s);
    printf("\nlower case :%s ", s);
    for (int  i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 97 && s[i] <= 122) {
            s[i] -= 32;
        }
    }
    printf("\nUPPERCASE :%s ", s);
}*/
/////////////////////////////////
//void nth_dervative(long int *power, char variable,long int *num_b_var,long int *num_of_times) {
//    int j = 1;
//    //char POW[50], NUM_B_VAR[50], NUM_OF_TIMES[50];
//  /*  if (power==0)
//    {
//        printf("the derv of %d is:%d", num_b_var, 0);
//    }
//    else if (power==1)
//    {
//        printf("the %d derv=%d", num_of_times, num_b_var);
//    }*/
//
//    
//    //else
//    ///{
//        while (j <*num_of_times)
//        {
//            *num_b_var = (*power) * (*num_b_var);
//            *power -= 1;
//            ++j;
//        }
//        printf("the %li derv= %li%c^%li\n",*num_of_times, *num_b_var, variable, *power);
//    //}
//
//    //return 1;
//   
//    //return NUM_OF_TIMES, NUM_B_VAR, variables, POW;
//}
//int main() {
//    long int Power, number_before_var, number_of_times;
//    char the_var;
//    printf("enter power: ");
//    scanf("%li", &Power);
//    fseek(stdin, 0, SEEK_END);
//    printf("\nenter num before variable: ");
//    scanf("%li", &number_before_var);
//    fseek(stdin, 0, SEEK_END);
//    printf("\nenter the varibale: ");
//    scanf("%c", &the_var);
//    fseek(stdin, 0, SEEK_END);
//    printf("\nenter the num of times: ");
//    scanf("%li", &number_of_times);
//    fseek(stdin, 0, SEEK_END);
//    nth_dervative(&Power, the_var, &number_before_var, &number_of_times);
//    //printf("the %s derv= %s%c^%s\n", number_of_times, number_before_var, the_var, Power);
//}
/////////////program to remove all instances of a specific value from the array/////////////////// 
//int main() {
//    int x[] = { 0,1,1 },size=3,c=0,j=0,removed_num, swap;
//    printf("enter the value you want to be removed: \n");
//    scanf("%d", &removed_num);
//    for (int i = 0; i < size; i++)
//    {
//
//        if (x[i] == removed_num)
//        {
//            c++;
//        }
//    }
//    while (j<c)
//    {
//        for (int  kk=0 ; kk < size-1; kk++)
//        {
//            if (x[kk]==removed_num)
//            {
//                swap = x[kk];
//                x[kk] = x[kk + 1];
//                x[kk + 1] = swap;
//            } 
//        }
//        size--;
//        j++;
//    }
//   
//    for (int z = 0; z <size; z++)
//    {
//        printf("%d ",x[z]);
//    }
//    printf("\nthe length is: %d",size);
//
//}
//////////////////////////////////
//int main(){
//    int x[] = { -1, 0, 1, 2, -1, -4 }, sum = 0, d[100] = {0};
//    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++)
//    {
//        for (int j = 0; j < sizeof(x) / sizeof(x[0]); j++)
//        {
//            d[j] = x[j];
//            if (j!=i)
//            {
//                sum = x[i] + x[j];
//                d[j] = x[i];
//                d[j] = x[j];
//                if (sum!=0)
//                {
//             
//                }
//            }
//          
//        }
//
//           
//    }
//    for (int z = 0; z < sizeof(d) / sizeof(d[0]); z++)
//    {
//        printf("%d ", d[z]);
//    }
//    
//}
//   

///////////////////////////////////////////
//void reverse_array(int x[], int size) {
//    int k = sizeof(x) / sizeof(x[0]);
//    int* p1 = &x[0], * p2 = &k - 1,swap,swap_middle_var;
//    int middle_var = k / 2;
//    if (k%2==0)
//    {
//        swap_middle_var = x[middle_var - 1];
//        x[middle_var - 1] = x[middle_var];
//        x[middle_var] = swap_middle_var;
//        while (*p1!=x[middle_var-1])
//        {
//            swap = *p1;
//            *p1 = *p2;
//            *p2 = swap;
//            ++p1;
//            --p2;
//        }
//    }
//    else
//    {
//        while (*p1!=x[middle_var])
//        {
//            swap = *p1;
//            *p1 = *p2;
//            *p2 = swap;
//            ++p1;
//            --p2;
//        }
//    }
//    for (int t = 0; t < k; t++)
//    {
//        printf("%d ", x[t]);
//    }
//
//}
////////////////////////////
//int main() {
//    int n, d[50],element;
//    printf("enter number of elements in array: ");
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        printf("enter element %d: ", i + 1);
//        scanf("%d", &element);
//        d[i] = element;
//    }
//    reverse_array(d, n);
//
//}
//////////////////////////////////
    /*int x[5] = { 2,3,5,6,7 }, * p1 = &x[0], * p2 = &x[4], swap;
    int f = sizeof(x) / sizeof(x[0]), h = f / 2;
    while (*p1 != x[h])
    {
        swap = *p1;
        *p1 = *p2;
        *p2 = swap;
        ++p1;
        --p2;
    }
    for (int t = 0; t < 5; t++)
    {
        printf("%d ", x[t]);
    }*/
/////////////////////////////////
