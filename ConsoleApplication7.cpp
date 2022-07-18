// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<stack>
using namespace std;
stack<int> stack1;
string func() {
	string x;
	cout << "enter string:";
	cin >> x;
	for (int i = 0; i < x.length(); i++)
	{
		stack1.push(x[i]);
	}
	string x2;
	while (stack1.empty() == 0)
	{
		x2 += stack1.top();
		stack1.pop();
	}
	return x2;
	/*while (stack1.empty()==0)
	{
		cout << stack1.top()<<" ";
		stack1.pop();
	}*/
}
int main()
{
	cout<<func();
    //string str1 = "hello";
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
