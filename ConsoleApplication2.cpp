// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
class TbankAccount {
private:
    string ownername,branchname;
    unsigned int balance;
public:
    virtual void print() {
        cout <<"the owner name is" <<ownername << endl;
        cout <<"the branch name is" <<branchname << endl;
        cout << "the balance is" << balance << endl;
    }
    void set_ownername(string owner_n) {
        ownername = owner_n;
    }
    void set_branchname(string branch_n) {
        branchname = branch_n;
    }
    void set_balance(unsigned int  B) {
        if (B<0)
        {
            cout << "false input" << endl;
        }
        else
        {
            balance = B;
        }
    }
    string get_ownername() {
        return ownername;
    }
    string get_branchname() {
        return branchname;
    }
    unsigned int get_balance() {
        return balance;
    }

};
class TCurrentAccount : public TbankAccount {
public:
    int servicefees;
    
    TCurrentAccount(get_ownername(),get_branchname(),get_balance(), int servicefees) {

    }
    TCurrentAccount(int)
    void print() {
        cout << "the owner name is" << ownername << endl;
        cout << "the branch name is" << branchname << endl;
        cout << "the balance is" << balance << endl;
        cout << "the service fees are" << servicefees << endl;
    }
    
};
class TSavingAccount: public TbankAccount{
public:
    double inresetrate;
    
    TSavingAccount(set_ownername(), set_branchname(), set_balance(), double Intresetrate) {

    }
    void print() {
        cout << "the owner name is" << ownername << endl;
        cout << "the branch name is" << branchname << endl;
        cout << "the balance is" << balance << endl;
        cout << "the inreset rate is" << inresetrate << endl;
    }

};

int main()
{
     
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
