// stack_queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<queue>
using namespace std;
class STACK {
public:
    queue<int> queue_1, queue_2,t_queue,temp_queue;
    int element;
    void PUSH(){
        cout << "enter elemnt: ";
        cin >> element;
        queue_2.push(element);
        while (queue_1.empty()==0)
        {
            queue_2.push(queue_1.front());
            queue_1.pop();
        }
        t_queue = queue_1;
        queue_1 = queue_2;
        queue_2 = t_queue;
    }
    void POP() {
        if (queue_1.empty()==1)
        {
            cout << "cant remove empty stack";
        }
        else
        {
            queue_1.pop();
        }
    }
    int show_top() {
        if (queue_1.empty()==1)
        {
            return -1;
        }
        else
        {
            return queue_1.front();
        }
    }
    int isEMPTY() {
        if (queue_1.empty()==1)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    void display_stack() {
        temp_queue = queue_1;
        while (temp_queue.empty()==0)
        {
            cout << temp_queue.front()<<" ";
            temp_queue.pop();
        }
    }
};
int main()
{
    STACK s;
    //pushing 4 elements into the stack
    cout << "push 4 elments into stack\n";
    s.PUSH();
    s.PUSH();
    s.PUSH();
    s.PUSH();
    cout << "after removing 2 elemnts from the stack"<<endl;
    //popping two elemnts from the stack
    s.POP();
    s.POP();
    ///displaying stack after removing the 2 elemnts from it
    cout << "displaying stack ";
    s.display_stack();
    cout << endl;
    ///show the top of the stack
    cout<<"top of the stack: "<<s.show_top()<<endl;
    ///condtion to check whether the stack is empty or not 
    cout << "is stack empty: ";
    cout<<s.isEMPTY()<<endl;
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
