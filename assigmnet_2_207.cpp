// assigmnet_2_207.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<stack>
using namespace std;
int length;
template<class T>
class Deque {
private:
	T front = -1;
	T rear = -1;
	T arr[250];
public:
	int size() {
		if (front == -1) {
			return 0;
		}
		/*else
		{
			
		}*/
	};
	bool isEmpty() {
		if (front == -1) {
			return 1;
		}
		else
		{
			return 0;
		}
	}
	void insert_first(T ele) {
		if (front==-1)
		{
			front = rear = 0;
			arr[front] = ele;
		}
	/*	if ((rear + 1) % size == front || front == 0 && rear == size - 1)
		{
			cout << "array is full";
		}*/
		/*else
		{

		}*/
	}
	void insert_last(T ele) {

	}

};
int main() {

}
//string infix_to_postfix(string x) {
//    string x2;
//    stack<int> stack1;
//    int flag = 0;
//    for (int i = 0; i < x.length(); i++)
//    {
//        if (x[i]=='*' || x[i]=='/' || x[i]=='+' || x[i]=='-')
//        {
//            if (stack1.empty()==0)
//            {
//                if (stack1.top()=='*' || stack1.top()=='/'&& x[i]=='+'||x[i]=='-')
//                {
//                    while (stack1.top() == '+' || stack1.top() == '-'||stack1.empty()==0) {
//                        
//                    }
//                }
//            }
//            else
//            {
//                stack1.push(x[i]);
//            }
//           /* if (x[i]=='+'||x[i]== '-')
//            {
//                flag = 1;
//                if (stack1.empty() == 0 && flag==1)
//                {
//                    flag = 0;
//                    while (stack1.top() == '+' || stack1.top() == '-' || stack1.empty()==0)
//                    {
//                            
//                    }
//                }
//            }
//            */
//
//           /* if (x[i]=='*' || x[i]=='/')
//            {
//                stack1.push(x[i]);
//            }*/
//        }
//        else
//        {
//            x2 += x[i];
//        }
//    }
//
//}
//int main()
//{
//	
//	//stack<int> mystack;
//	//mystack.push(1);
//	//// Stack becomes 1 
//	//cout << mystack.empty();
//	//return 0;
//    //cout << "Hello World!\n";
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
