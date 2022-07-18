// ConsoleApplication10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stack>
#include<string>
using namespace std;
string infix_to_postfix(string x) {
    string x2;
    stack<int>stack1;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == '*' || x[i] == '/' || x[i] == '+' || x[i] == '-') {
            if (stack1.empty()==1)
            {
                stack1.push(x[i]);
            }
            else if(stack1.empty()==0)
            {
                if (stack1.top()=='+'|| stack1.top()=='-' && x[i]=='*' || x[i]=='/')
                {
                    stack1.push(x[i]);
                }
                else if (stack1.top()=='*' || stack1.top()=='/' && x[i]=='+' || x[i]=='-')
                {
                    while (stack1.empty() == 0) {
                        x2 += stack1.top();
                        stack1.pop();
                        if (stack1.top()=='+' || stack1.top()=='-')
                        {
                            break;
                        }
                    }
                }
                else if (stack1.top()==x[i])
                {
                    while (stack1.empty()==0)
                    {
                        x2 += stack1.top();
                        stack1.pop();
                        if (stack1.top() == '+' || stack1.top() == '-' || stack1.top() == '*'|| stack1.top() == '/')
                        {
                            break;
                        }
                    }
                }
                else if (stack1.top()=='+' && x[i]=='-' || stack1.top()=='-' && x[i]=='+')
                {
                    x2 += stack1.top();
                    stack1.pop();
                    stack1.push(x[i]);
                }
                else if (stack1.top() == '*' && x[i] == '/' || stack1.top() == '/' && x[i] == '*')
                {
                    x2 += stack1.top();
                    stack1.pop();
                    stack1.push(x[i]);
                }
            }
        }
        else
        {
            x2 += x[i];
        }
    }
    return x2;
} 
int main()
{
    cout << infix_to_postfix("a+b*c-d") << endl;
    //cout << "Hello World!\n";
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
