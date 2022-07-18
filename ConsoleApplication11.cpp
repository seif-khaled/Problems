// ConsoleApplication11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;
int main() {
	//vector<int> v2(5);
	//vector<int> v1(v2);
	vector<int> v1(5,7);
	v1.push_back(3);
	cout << v1[0];
}
//class Des
//{
//public:
//	Des(int x) { this->x = x; cout << x << endl; }
//	~Des() { cout << x << endl; }
//private:
//	int x;
//};
//void test()
//{
//	Des d(1);
//}
//int main()
//{
//	Des* p = new Des(0);
//	test();
//	delete p;
//	return 0;
//}
//int connecting_towns(long double towns, vector<long double>routes) {
//	long double total = 1, elemnt;
//	for (int i = 0; i < towns - 1; i++)
//	{
//		cin >> elemnt;
//		routes.push_back(elemnt);
//		total *= routes[i];
//	}
//	return total;
//}
//
//int main()
//{
//	 long double n, towns;
//	vector<long double>routes;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> towns;
//		cout << connecting_towns(towns, routes)<<endl;
//	}
//}
	/*vector<int>list;
	for (int i = 0; i < 5; i++)
	{
		list.push_back(i + 1);
	}
	for (int i = 0; i < list.size(); i++)
	{
		cout << list[i] << " ";
	}*/
	//cout << "Hello World!\n";
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
