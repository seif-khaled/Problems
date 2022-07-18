// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <vector>
/////insertion sort/////////////
using namespace std;
class node {
public:
	int data;
	node* next;
};
node* head = NULL;	
node* tail = NULL;
void insertion_sort(int el) {
	node* ptr=new node();
	ptr->data = el;
	if (head==NULL)
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
		node* n=head;
		while (n!=NULL)
		{
			if (el > n->data && el < n->next->data) {
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
	while (n!=NULL)
	{
		cout << n->data << " ";
		n = n->next;
	}
}
class Tarr {
private:
	int number_to_search;
public:
	void insert_arr(int arr[], int length) {
		int element;
		cin >> element;
		arr[0] = element;
		counter++;
		while (1)
		{
			cin >> element;
			if (element == 99999)
			{
				break;
			}
			if (element < arr[0])
			{
				if (counter == 1)
				{
					arr[1] = arr[0];
					arr[0] = element;
					counter++;

				}
				else if (counter > 1)
				{
					for (int j = counter; j > 0; j--)
					{
						arr[j] = arr[j - 1];
					}
					arr[0] = element;
					counter++;
				}

			}
			else if (element > arr[counter - 1]) {
				arr[counter] = element;
				counter++;
			}
			else {
				int i = 0;
				int index;
				while (i < counter)
				{
					if (element > arr[i] && element < arr[i + 1])
					{
						index = i + 1;
						for (int z = counter; z > index; z--)
						{
							arr[z] = arr[z - 1];
						}
						arr[index] = element;
						counter++;
						break;
					}
					i++;
				}
			}
		}
	}
	int binary_search(int arr[],int lenght) {
		cout << "enter number to search: ";
		cin >> number_to_search;
		int middle_element = counter / 2;
		if (arr[middle_element]==number_to_search)
		{
			return middle_element;
		}
		else if (number_to_search > arr[middle_element]) {
			for (int i = middle_element+1; i < counter; i++) {
				if (number_to_search==arr[i])
				{
					return i;
				}
				if (i==counter-1 && number_to_search!=arr[i])
				{
					return -1;
				}
			}

		}
		else if (number_to_search < arr[middle_element]) {
			for (int i = middle_element-1; i >=0; i--) {
				if (number_to_search==arr[i])
				{
					return i;
				}
				if (i==0 && number_to_search!=arr[i])
				{
					return -1;
				}
			}
		}
	}
	int counter = 0;
	void print_array(int arr[],int length) {
		for (int i = 0; i < counter; i++)
		{
			cout << arr[i] << " ";
		}
	}
};
//void insert_arr(int arr[],int length) {
//	int element;
//	cin >> element;
//	arr[0] = element;
//	counter++;
//	while (1)
//	{
//		cin >> element;
//		if (element==99999)
//		{
//			break;
//		}
//		if (element<arr[0])
//		{
//			if (counter==1)
//			{
//				arr[1] = arr[0];
//				arr[0] = element;
//				counter++;
//
//			}
//			else if(counter >1)
//			{
//				for (int j = counter; j>0 ; j--)
//				{
//					arr[j] = arr[j - 1];
//				}
//				arr[0] = element;
//				counter++;
//			}
//
//		}
//		else if (element > arr[counter - 1]) {
//			arr[counter] = element;
//			counter++;
//		}
//		else {
//			int i = 0;
//			int index;
//			while (i<counter)
//			{
//				if (element>arr[i] && element<arr[i+1])
//				{
//					index = i + 1;
//					for (int z = counter; z > index; z--)
//					{
//						arr[z] = arr[z - 1];
//					}
//					arr[index] = element;
//					counter++;
//					break;
//				}
//				i++;
//			}
//		}
//	}
//}
int main() {
		int n,arr[150];
		n = sizeof(arr) / sizeof(arr[0]);
		Tarr obj1;
		obj1.insert_arr(arr, n);
		obj1.print_array(arr, n);
		cout << endl;
		//int value=obj1.binary_search(arr, n);
		cout << obj1.binary_search(arr,n) << endl;
	/*for (int i = 0; i < counter; i++)
	{
		cout<<arr[i]
	}*/

	//printf("%d",sizeof(arr)/sizeof(arr[0]));
	/*insert_arr(arr, n);
	for (int i = 0; i <counter; i++)
	{
		cout << arr[i] << " ";
	}*/
	/*for (int i = 0; i < 20; i++)
	{
		cout << arr[i] << " ";
	}*/
	/*if (arr==NULL)
	{
		printf("yes man");
	}
	else
	{
		printf("print no man");
	}*/
	//cin >> n;
	/*for (int i = 0; i < n; i++)
	{
		cout << "enter element" << i + 1<<" ";
		cin >> arr[i];
	}*/
	////vecotr to add elements then print them///////
	/*vector <int> arr;
	int i = 0;
	int element=0;
	while (element!=-1)
	{
		cout << "enter: ";
		cin >> element;
		arr.push_back(element);
		
		cout << "continue ?" << endl;
		cin >> element;
	}
	while (i!=arr.size())
	{
		cout << arr[i] << endl;
		i++;
	}*/
	//////////////////////////
	/*int n;
	while (1)
	{

		cin >> n;
		if (n==100000)
		{
			break;
		}
		insertion_sort(n);
	}
	print_list();*/

	/*insertion_sort(17);
	insertion_sort(5);
	insertion_sort(20);
	insertion_sort(8);
	insertion_sort(3);
	insertion_sort(4);
	insertion_sort(6);
	insertion_sort(41);
	insertion_sort(27);
	insertion_sort(-3);
	insertion_sort(-1);
	insertion_sort(147);*/
	/*cout << "\n\n" <<"length of linked list is:"<< counter << endl;
	cout << "\n\n"<< "head is :"<< head->data << endl;
	cout << "\n\n"<< "tail is :"<< tail->data << endl;*/
	
	
}
////function whihc incrments years given in thr array by 2 ///////
//void after_2_years(int *p){
//   
//    for (int i = 0; i < 10; i++)
//    {
//        //*(p + i) = *(p + i) + 2;
//        *(p + i) += 2;
//    }
//}
//int main()
//{
//    int years[10] = { 2007,2008,2009,2010,2011,2012,2013,2014,2015,2016 };
//    cout << "Years before updating: " << endl;
//    for (int i = 0; i < 10; i++)
//    {
//        cout << *(years + i) << "\t";
//    }
//    cout << endl;
//    after_2_years(years); cout << "Years after updating: " <<endl;
//    for (int i = 0; i < 10; i++) {
//            cout << *(years + i) << "\t";
//        }
//    cout << endl;
//    //printf("Press any key to continue,...");
//    //char ch = getch();
//    return 0;
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
