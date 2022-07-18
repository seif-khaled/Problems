// draft_for_problems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>
using namespace std;
///////task1///////
//#include <iostream>
//using namespace std;
class node {
public:
	int data;
	node* next;
};
node* head = NULL;
node* tail = NULL;
class tsortedlist :public node {
public:
	void insertion_sort(int el) {
		node* ptr = new node();
		ptr->data = el;
		if (head == NULL)
		{
			ptr->next = NULL;
			head = tail = ptr;

		}
		else if (el < head->data) {
			ptr->next = head;
			head = ptr;
			//counter++;

		}

		else if (el > tail->data) {
			ptr->next = NULL;
			tail->next = ptr;
			tail = ptr;
			//counter++;

		}
		else
		{
			node* n = head;
			while (n != NULL)
			{
				if (el > n->data&& el < n->next->data) {
					ptr->next = n->next;
					n->next = ptr;
					//counter++;
					break;
				}
				n = n->next;
			}
		}
	}
	void print_list() {
		node* n = head;
		while (n != NULL)
		{
			cout << n->data << " ";
			n = n->next;
		}
	}

};

int main()
{
	tsortedlist obj1l;
	int n;
	while (1)
	{

		cin >> n;
		if (n == 100000)
		{
			break;
		}
		obj1l.insertion_sort(n);
	}

	obj1l.print_list();
}
///////////////taks 2//////////////
//class Tarr {
//public:
//	void insert_arr(int arr[], int length) {
//		int element;
//		cin >> element;
//		arr[0] = element;
//		counter++;
//		while (1)
//		{
//			cin >> element;
//			if (element == 99999)
//			{
//				break;
//			}
//			if (element < arr[0])
//			{
//				if (counter == 1)
//				{
//					arr[1] = arr[0];
//					arr[0] = element;
//					counter++;
//
//				}
//				else if (counter > 1)
//				{
//					for (int j = counter; j > 0; j--)
//					{
//						arr[j] = arr[j - 1];
//					}
//					arr[0] = element;
//					counter++;
//				}
//
//			}
//			else if (element > arr[counter - 1]) {
//				arr[counter] = element;
//				counter++;
//			}
//			else {
//				int i = 0;
//				int index;
//				while (i < counter)
//				{
//					if (element > arr[i] && element < arr[i + 1])
//					{
//						index = i + 1;
//						for (int z = counter; z > index; z--)
//						{
//							arr[z] = arr[z - 1];
//						}
//						arr[index] = element;
//						counter++;
//						break;
//					}
//					i++;
//				}
//			}
//		}
//	}
//	int counter = 0;
//	void print_array(int arr[], int length) {
//		for (int i = 0; i < counter; i++)
//		{
//			cout << arr[i] << " ";
//		}
//	}
//};
//int main() {
//	int n, arr[150];
//	n = sizeof(arr) / sizeof(arr[0]);
//	Tarr obj1;
//	obj1.insert_arr(arr, n);
//	obj1.print_array(arr, n);
//}
//int main() {
	/*int x = 0;

	int y = x + ~x;

	printf(" % d", y);*/
	/*int x = 1;

	int y = x + ~x;

	printf(" % d", y);*/
	/*int a[3] = { 1, 2, 3 };

	printf("a[0] = [%d] = %d", a, *a);*/

	/*short x = 8;

	x = x >> 3;

	cout << "x=0x" << hex << x << " == ";

	cout << bitset<8>(x) << endl;*/
	/*short x = 8;

	x = x << 3;

	cout << "x=0x" << hex << x << " == ";

	cout << bitset<8>(x) << endl;*/
	/*short s;
	printf("Size of short = %d bytes = %d bits\n", sizeof(s), sizeof(s) * 8);*/
	/*int* p;
	p = (int*)malloc(sizeof(int));
	printf("%d", *p);*/
	//printf("%d", sizeof(*p));
	/*int x = 1;

	int y = x + ~x;

	printf("%d", y);*/
	//int radius;
	//int _1993_tar_return,Double;
	/*radius=scanf("%d");*/
	/*int n = 2, m = 3, * p;

	p = &m;

	p = &n;

	n = *p;

	printf("%d\n", n);*/
	/*int count = 1;

	int condition = 1;

	for (; condition; ) {

		printf("%d ", count);

		count++;

		condition = count < 5;

	}

	printf("Press any key to continue,..");*/
	/*int* p;
	p = (int*)malloc(sizeof(int));*/
	//printf("%d", *p);
	/*unsigned int n1, result;

	n1 = 10;

	_asm

	{

		mov eax, n1

		mov edx, 20

		add eax, edx

		mov result, eax

	}

	printf("% d", result);*/
	/*int x = 10,y=10;
	if (x == y)

		printf("x is equal to y\n");

	else if (x >> y)

		printf("x is greater than y\n");

	else

		printf("x is smaller than y\n");*/

	/*int x = 10;

	printf("x = % d", x++);*/
	/*int X = 0;

	int y = X + ~X;

	printf("% d", y);*/
	/*short x = 8;

	x = x >> 3;

	cout << "x=0x" << hex << x << " == ";

	cout << bitset<8>(x) << endl;*/
	/*int x = -15213;

	int iy = (char)x;

	cout << "iy=0x" << hex << iy << " == ";*/
	
	/*int count,y=0;
	for (count = 0; count < 100; count += 2)

		y = y + count;

	printf("y = % d", count);*/
	/*int n = 2, m = 3, * p;

	p = &m;

	p = &n;

	n = *p;

	printf("%d\n", n);*/
	/*short int s;
	printf("Size of short = %d bytes = %d bits\n", sizeof(s), sizeof(s) * 8);*/
	//int x = 1;

	////int y = x + ~x;

	//printf(" % d", ~x);
//}
//int magic_sqaure(int matrix[3][3]) {
//	int biggest_sum[8] = {0}, sum = 0, index_of_biggest_sum = 0,max=-148578;
//	///column traverse in the same row///
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++) {
//			sum += matrix[i][j];
//		}
//		if (sum > max)
//		{
//			max = sum;
//		}
//		biggest_sum[index_of_biggest_sum] = sum;
//		index_of_biggest_sum ++ ;
//		sum = 0;
//	}
//	///row traverse////
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++) {
//			sum += matrix[j][i];
//		}
//		if (sum>max)
//		{
//			max = sum;
//		}
//		biggest_sum[index_of_biggest_sum] = sum;
//		index_of_biggest_sum++;
//		sum = 0;
//	}
//	/////diagonal traverse/////////////
//	sum = matrix[0][0] + matrix[1][1] + matrix[2][2];
//	if (sum > max)
//	{
//		max = sum;
//	}
//	biggest_sum[index_of_biggest_sum] = sum;
//	index_of_biggest_sum++;
//	sum = 0;
//	sum = matrix[0][2] + matrix[1][1] + matrix[2][0];
//	if (sum > max)
//	{
//		max = sum;
//	}
//	biggest_sum[index_of_biggest_sum] = sum;
//	index_of_biggest_sum++;
//	sum = 0;
//	return max;
//}
//int main() {
//	int Matrix[3][3] = { {0,0,0},{0,0,0},{0,0,0} };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++) {
//			cin >> Matrix[i][j];
//		}
//	}
//	cout<<magic_sqaure(Matrix)<<" ";
//	/*for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++) {
//			cout << Matrix[i][j]<<" ";
//		}
//		cout << endl;
//	}*/
//}
//////////compare tripltets(diffculty:ezzzzz)///////////////////////
//void compare_triplets(int a[3], int b[3]) {
//    int alice_bob_scores[2] = {0,0};
//    for (int i = 0; i < 3; i++) {
//        if (a[i]>b[i])
//        {
//            alice_bob_scores[0] += 1;
//        }
//        else if (a[i] < b[i]) {
//
//            alice_bob_scores[1] += 1;
//        }
//        else if(a[i]==b[i])
//        {
//            continue;
//        }
//    }
//    for (int i = 0; i < 2; i++)
//    {
//        cout << alice_bob_scores[i] << " ";
//    }
//}
//int main()
//{
//    int alice[3], bob[3];
//    int value;
//    for (int i = 0; i < 3; i++) {
//        cin >> value;
//        /*if (value<1 || value>100)
//        {
//            break;
//            return 0;
//        }*/
//        alice[i] = value;
//    }
//    for (int i = 0; i < 3; i++) {
//        cin >> value;
//        /*if (value < 1 || value>100)
//        {
//            break;
//        }*/
//        bob[i] = value;
//    }
//    compare_triplets(alice, bob);
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
