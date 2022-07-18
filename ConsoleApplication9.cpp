// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
void function(int num_of_soliders, int itreation) {
    int arr[200];
    int z = 0;
    for (int i = 1; i <= num_of_soliders; i++)
    {
        arr[z]=i;
        z++;
    }
    for (int j = 0; j <=z ; j++)
    {
        cout << arr[j]<<" ";
    }
   /* arr[0] = 12;
    cout << arr[0] << endl;*/
}
int main()
{
    function(15, 3);
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
