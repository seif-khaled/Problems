// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
////doubley linked list////////////
using namespace std;
class node {
public:
	int data;
	node* next;
	node* prev;
};
node* head = NULL;
node* tail = NULL;
void insert_head(int element) {
	if (head==NULL)
	{
		head = new node();
		head->data = element;
		head->next = NULL;
		head->prev = NULL;
		tail = head;
	}
	else
	{
		node *n = new node();
		n->data = element;
		n->next = head;
		n->prev = NULL;
		head->prev = n;
		head = n;
		tail = head->next;

	}
}
void insert_tail(int element) {
	if (head==NULL)
	{
		head = new node();
		head->data = element;
		head->next = NULL;
		head->prev = NULL;
		tail = head;
	}
	else
	{
		node* n = new node();
		n->data = element;
		n->next = NULL;
		node* ptr=head;
		while (1)
		{
			if (ptr->next == NULL) {
				n->prev = ptr;
				ptr->next = n;
				tail = n;
				break;
			}
			ptr = ptr->next;
		}
	}
}
void delete_head() {
	if (head==NULL)
	{
		cout << "cant delete list bitch its empty" << endl;
	}
	else
	{
		node* ptr = head;
		head = head->next;
		head->prev = NULL;
		delete ptr;
	}
	
}
//void delete_tail() {
//	if (tail==NULL)
//	{
//		cout << "cant delete list bitch its empty" << endl;
//	}
//	else
//	{
//		node* ptr = tail;
//		node* ptr2 = head;
//		while (1)
//		{
//			if (ptr2->) {
//
//			}
//			ptr2 = ptr2->next;
//		}
//		/*tail = tail -> prev;
//		tail*/
//	}
//}
int show_head() {
	if (head==NULL)
	{
		return 0;
	}
	else
	{
		return head->data;
	}
}
int show_tail() {
	if (tail==NULL)
	{
		return 0;
	}
	else
	{
		return tail->data;
	}
}
void print_list(node* n) {
	while (n!=NULL)
	{
		cout << n->data << " ";
		n = n->next;
	}
}

int main() {
	insert_head(12);
	insert_head(7);
	insert_tail(9);
	insert_tail(178);
	print_list(head);
	cout << endl << tail->prev->data << endl;
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
