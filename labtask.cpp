#include <iostream>

using namespace std;
class IntSLLNode {
public:
	IntSLLNode() {
		next = 0;
	}
	IntSLLNode(int el, IntSLLNode* ptr = 0) {
		info = el; next = ptr;
	}
	int info;
	IntSLLNode* next;
};
class IntSLList {
public:
	IntSLList() {
		head = tail = 0;
	}
	~IntSLList() {
		for (IntSLLNode* p; !isEmpty(); ) {
			p = head->next;
			delete head;
			head = p;
		}
	}
	int isEmpty() {
		return head == 0;
	}
	void addToHead(int el) {
		if (isEmpty()) {
			head = new IntSLLNode(el, head);
			head->next = 0;
			tail = head;
		}
		else {
			head = new IntSLLNode(el, head);
		}
		//create new node
		//set pointer of new node to point to head
		//update head to point to new node
		//if list was initially empty, update tail to point to new node
		//create new node
		 //set pointer of new node to point to head
			//update head to point to new node
		//if list was initially empty, update tail to point to new node

	}
	void addToTail(int el) {
		if (isEmpty()) {
			tail = new IntSLLNode(el, tail);
			tail->next = 0;
			head = tail;
		}
		else {
			tail->next = new IntSLLNode(el, 0);
			tail = tail->next;
			tail->next = 0;
		}
		// if list not empty, add new node to tail
		// update tail to point to last node
		//if list is empty, update tail and head to point to new node

	}
	int deleteFromHead() { // delete the head and return its info;
		int z = -1;
		if (!isEmpty()) {
			int z = head->info;
			if (head->next != 0) {
				IntSLLNode* hold = head->next;
				delete(head);
				head = hold;
			}
			else {
				delete(head);
				head = 0;
				tail = 0;
			}
		}
		return z;

	}
	int deleteFromTail() { 
		int d = -1;
		if (!isEmpty()) {
			int d = tail->info;
			if (tail != head) {
				IntSLLNode* hold = head;
				while (hold->next != tail) {
					hold = hold->next;
				}
				delete(tail);
				hold->next = 0;
				tail = hold;
			}
			else {
				delete(tail);
				tail = 0;
				head = 0;
			}
		}
		return d;

	}
	void deleteNode(int el) {
		if (!isEmpty()) {
			IntSLLNode* hold = head;
			unsigned int f = 0;
			while (hold != 0) {
				hold = hold->next;
				f++;

			}
			if (el > f - 1 || el < 0) {
				cout << "Element not found!\n\n";
			}
			else {
				if (el == 0) {
					deleteFromHead();
				}
				else if (el == f - 1) {
					deleteFromTail();
				}
				else {
					IntSLLNode* holder2 = head;
					el--;
					while (el--) {
						cout << "BLA";
						holder2 = holder2->next;
					}
					IntSLLNode* deleted = holder2->next;
					holder2->next = deleted->next;
					delete(deleted);
				}
			}
		}
	}
	bool isInList(int el) const {
		IntSLLNode* hold = head;
		while (hold != 0) {
			if (hold->info == el) {
				return 1;
			}
			hold = hold->next;
		}
		return 0;

	}
private:
	IntSLLNode* head, * tail;
};

int main() {



	return 0;

}

