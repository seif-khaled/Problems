// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
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
		if (n==100000)
		{
			break;
		}
		obj1l.insertion_sort(n);
	}
	obj1l.print_list();
	/*obj1l.insertion_sort(21);
	obj1l.insertion_sort(5);
	obj1l.insertion_sort(12);
	obj1l.print_list();*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
