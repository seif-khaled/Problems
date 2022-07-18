// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Node {
public:
    Node() {
        next = 0;
        prevoius = 0;
        //write your modification here
    }
    Node(int el, Node* ptr = 0,Node *ptr2=0) { //write your modification for the constructor arguments here
        info = el;
        next = ptr;
        prevoius = ptr2;
        //write your modification here
    }
    int info;
    Node* next;
    Node* prevoius;
};

class LList {
private:
    Node* head, * tail;

public:
    LList() {
        head = tail = 0;
    }
    ~LList() {
        for (Node* p; !isEmpty(); ) {
            p = head->next;
            delete head;
            head = p;
        }
    }
    int isEmpty() {
        return head == 0;
    }
    void addToHead(int el) {
        //head = new Node(el, head);
        head->prevoius = new Node(el,head,NULL);
       
        //head = new Node(el, head);
        if (tail == 0)
            tail = head;
    }
    void addToTail(int el) {
        if (tail != 0) { // if list not empty;
            tail->next = new Node(el,0,tail);
            
       
            tail = tail->next;
            //tail

        }
        else head = tail = new Node(el);

    }
    int deleteFromHead() { // delete the head and return its info;
        int el = head->info;
        Node* tmp = head;
        if (head == tail) // if only one node in the list;
            head = tail = 0;
        else {
            //head->prevoius = head;
            head = head->next; 
            head->prevoius = NULL;
        }
        delete tmp;
        return el;
    }



    int deleteFromTail() { // delete the tail and return its info;
        int el = tail->info;
        if (head == tail) { // if only one node in the list;
            delete head;
            head = tail = 0;
        }
        else { // if more than one node in the list,
            Node* tmp; // find the predecessor of tail;
            for (tmp = head; tmp->next != tail; tmp = tmp->next);
            tmp->prevoius =tail;
            delete tail;
            tail = tmp; // the predecessor of tail becomes tail;
            tail->next = 0;
        }
        return el;
    }
    bool isInList(int el) const {
        Node* tmp;
        for (tmp = head; tmp != 0 && !(tmp->info == el); tmp = tmp->next);
        return tmp != 0;

    }
    void displayList() {
        if (head == 0) // if empty list;
            return;
        Node* tmp = head;

        for (tmp = head; tmp != 0; tmp = tmp->next) {
            cout << tmp->info << endl;
        }

    }
};

class LLStack {
private:
    LList lst;
public:
    LLStack() {
    }
    void clearStack() {
        /*while (true)
        {

        }*/

    }
    bool isEmpty() {
       
        if (head!=NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int topEl() {
        return head->info;
    }
    int pop() {
        if (head == NULL) {
            cout << "list is empty";
            return 0;
        }
        Node* ptr = head;
        head = head->next;
        delete ptr;
        return head;
        //write your code here

    }
    void push(int el) {
        if (head == NULL) {
            head = new Node(el);
        }
        else
        {
            Node* ptr = new Node(el, head);
            head = ptr;
        }
       
    }
    void displayStack() {
        lst.displayList();
    }
};



int main()
{
    /*LList myList;
    myList.addToHead(5);
    myList.addToHead(4);
    myList.addToHead(3);
    myList.addToHead(2);
    myList.addToHead(1);
    myList.displayList();*/
    LLStack myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    cout << myStack.topEl(); //should print 3
    myStack.push(4);
    int top = myStack.pop();
    myStack.push(5);
    myStack.displayStack(); //should print 5 3 2 1
    myStack.clearStack();
    myStack.displayStack(); // should print nothing
    return 0;
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
