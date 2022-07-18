// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <climits>
#include<string>
#include<conio.h>
using namespace std;
class node {
public:
    int data;
    node* next;
};
node* head = NULL;
node* tail = NULL;
//node* first = NULL;
void insert_head(int d) {
    if (head==NULL)
    {
        head = new node();
        head->data = d;
        head->next = NULL;
        //first = head;
    }
    else
    {
        node* ptr = new node();
        ptr->data = d;
        ptr->next = head;
        tail =ptr->next;
        head = ptr;
        //first = head;
    }
}
void insert_end(int d) {
    if (head==NULL)
    {
        head = new node();
        head->data = d;
        head->next = NULL;
       

    }
    else {
        node* ptr = new node();
        ptr->data = d;
        ptr->next = NULL;
        node* n = head;
        tail = ptr;
        while (1)
        {
            if (n->next == NULL) {
                n->next = ptr;
                break;
            }
            n = n->next;
        }
        //while (n->next!=NULL)
        //{
        //    n = n->next;
        //    /*if (n->next==NULL)
        //    {
        //        
        //        break;
        //    }*/
        //    
        //}
        //n->next = ptr;
    }
}

void is_in(int d,node* n) {
    while (n!=NULL)
    {
        if (n->data == d) {
            cout << "found" << endl;
            break;
        }
        if (n->next == NULL && n->data != d) {
            cout << "not found\n";
        }
        n = n->next;
    }
}
void delete_head() {
    if (head==NULL)
    {
        cout << "list is empty";
    }
    else
    {
        node* n = head;
        head = head->next;
        delete n;
    }
    
}
void delete_tail() {
    node* ptr = head;
    while (1)
    {
        if (ptr->next->next ==NULL) {
            tail = ptr;
            tail->next = NULL;
            delete ptr->next;
            break;
        }
        ptr = ptr->next;
    }

}
void delete_duplicates() {
    node* n = head;
    node* n2;
    
}
int show_tail() {
    return tail->data;
}
void new_print() {
    node* n = head;
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}
int show_head() {
    return head->data;
    //cout << first << endl;
    //return first->next->data;
}
int main() {
    insert_end(12);
    insert_end(12);
    insert_end(13);
    insert_end(14);
    insert_end(15);
    insert_end(14);
   /* insert_head(12);
    insert_head(5);*/
   /* insert_end(13);
    insert_end(9);
    insert_end(45);
    delete_tail();*/
    /*delete_tail();
    delete_tail();
    delete_tail();*/
    //is_in(7,head);
    //delete_head();
    delete_duplicates();
    new_print();
   /* int y = show_head();
    cout <<""<<"head is :"<< y << endl;
    int x=show_tail();
    cout <<"tail is : "<< x << endl;*/

}
//void print(node *n) {
//    while (n!=NULL)
//    {
//        cout << n->data<<endl;
//        n = n->next;
//    }
//}
//void insert_node(int data, node* next=0) {
//    node* head  = new node();
//    node* tail = new node();
//    if (next==NULL)
//    {
//        head->data = data;
//        head->next = NULL;
//        tail= 0;
//    }
//    else 
//    {
//        head->data = data;
//        head->next = tail;
//        tail->
//    }
//}
//int main() {
    /*node* head = new node();
    head->data = 12;
    head->next = NULL;*/
   /* node* head = NULL;
    node* second = NULL;
    node* third = NULL;
    node* tail = NULL;

     head = new node();
     second = new node();
     third = new node();
     tail = new node();

    head->data = 3;
    head->next = second;
    second->data = 14;
    second->next = third;
    third->data = 15;
    third->next = tail;
    tail->data = 22;
    tail->next = NULL;
    print(head);*/


  /*  int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int* p;
    p = a;
    for (int i = 9; i >= 0; i--)
    {
        *(p + ((i - 1) % 10)) = i;
        printf("%d\n", *(p+i));
    }*/
    /*unsigned int x, y, z1, z2;
    char ch = ' ';
    while (ch != 27)
    {
        cout << "Enter X:";
        cin >> x;
        cout << "Enter y:";
        cin >> y;
        z1 = x | y;
        z2 = x || y;
        printf("%x | %x = %x\n", x, y, z1);
        printf("%x || %x = %x\n", x, y, z2);
        cout << "\npress any key to continue, press esc to exit, ..\n";
        ch = getchar();
    }
    cout << "\npress eny key then press return to exit";
    getchar();*/
//}
//class node {
//public:
//    int data;
//    node* next;
//};
//void print_nodes(node* n) {
//    while (n!=NULL)
//    {
//        cout << n->data << endl;
//        n = n->next;
//    }
//}
//int main() {
//    node* head = NULL;
//    node* middle = NULL;
//    node *tail= NULL;
//    head = new node();
//    middle = new node();
//    tail = new node();
//    head->data = 12;
//    head->next =middle;
//    middle->data = 15;
//    middle->next = tail;
//    tail->data = 17;
//    tail->next =NULL;
//    print_nodes(head);
//    return 1;
//}
//int main is hte essence of life bec ima havker for (int i;i<0;i++)bs yaaba babaiopdja cjaijrfhhofjo
//class base {
//public:
//    virtual void printer() {
//        cout << "baaby my shonps is on fire" << endl;
//    }
//};
//class child : public base {
//public:
//    void printer() {
//        cout << "baaby anan el child el class" << endl;
//    }
//};
//int main() {
//    base b;
//    child c;
//   /* b.printer;
//    c.printer;*/
//    cout << b.printer << endl << c.printer << endl;
//}
//class Base {
//protected:
//    int num = 7;
//};
//class Derived : private Base {
//public:
//    void func() {
//        cout << "The value of num is: " << num;
//    }
//};
//int main() {
//    Derived obj;
//    obj.func();
//    return 0;
//}
///virtuala functions///
//class person {
//public:
//    string Name,salary,qualifications;
//    int age;
//    virtual void set_salry_age_qualifictions() {
//        cout << "input slalary: ";
//        cin >> salary;
//        cout << "\ninput age: ";
//        cin >> age; 
//        cout << "\ninput qualifications: ";
//        cin >> qualifications;
//    }
//    //string say_name() {
//    //    getline(cin, Name);
//    //    //cin >> Name;
//    //    return Name;
//    //}
//};
//class mwzef :public person {
//public:
//    int height;
//    void set_salry_age_qualifictions() {
//        cout << "input slalary: ";
//        cin >> salary;
//        cout << "\ninput age: ";
//        cin >> age;
//        cout << "\ninput qualifications: ";
//        cin >> qualifications;
//        cout << "\ninput hiorght: ";
//        cin >> height;
//    }

    /*int age;
    void set_age() {
        cin >> age;
      
    }
    int get_age() {
        return age;
    }*/
//};
//string print_name(string NAME) {
//    return NAME;
//}
//string print_name(string NAME, int n) {
//    string concantentor;
//    for (int i = 0; i < n; i++)
//    {
//        concantentor += NAME;
//        concantentor += " ";
//    }
//    return concantentor;
//}
//int is_even(int n) {
//    if (n%2==0)
//    {
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}
//int main() {
//    mwzef employee;
//    employee.set_salry_age_qualifictions();
//
//    /*cout << "employe name is:" << employee.say_name()<<endl;
//    employee.set_age();
//    cout<<"his age is:"<<employee.get_age()<< endl;*/
//    //cout << employee.say_name() << endl;
//    //string Name = "seif";
//    //cout << print_name(2) << "\n";
//   /* cout << print_name("omasa", 6)<<endl;
//    cout << print_name("hasan") << endl;*/
//}
//IMPORTANT NOTES FOR C++:
///1-abstract classes are basically any classes with pure virtual functions in it (i.e syntax of pure virtual func is virtual return type name of function()=0//
//2=difffernce between puure virt func and virtual functions is that in normal virtual functions you can overwrite the class or leave it as it is like if i have enemy classs and ninja class that inherited from enemy if enemy has defiend virtual function in it and we havent typped or overdied the function in ninja class  it will inherit from the parent by deafualt in pure virt you have to overwrite you dont choose if i can or cant overwite it since its by deafult =0//
//class human
//{
//private:
//
//    float age;
//    float hight;
//    float area;
//
//public:
//    void setAge(float a)
//    {
//        if (a > 1)
//            age = a;
//            //a = age;//wrong 
//            //howa dah el s7 age = a;//howa dah el mafrdo anta bet acces el private mn gowa el class a= age ezay w howa msh hy3rf l2no private 
//    }
//    float getAge()
//    {
//        return age;
//
//    }
//
//    void setHight(float h)
//    {
//        if (h > 1)
//            //h = hight;//same brdo
//            hight = h;
//        //height=h l2nk 3yz tset var private //
//
//
//
//
//    }
//    float getHight()
//    {
//        return hight;
//
//    }
//    float getarea()
//    {
//        return age * hight;
//    }
//};
//
//
//int main(){
//        human obj;
//        //obj.hight(180);wrong mafesh haga emsha kda mafesh attribute aw method amsha hight t2sod obj.set hight
//        obj.setHight(10);
//        //obj.age(20) brdo nfs el fkra mafesh method emsha age fel class el enta 3mlo create ;
//        obj.setAge(20);
//        cout << obj.getarea() << endl;
//        return 0;
//}
//class student {
//protected:
//    int name;
//    int age;
//    int gender;
//
//};
//class undegraduate :public student {
//    int total_marks;
//    float percantage;
//    char letter_grade;
//   
//public:
//    /*void enter_percentage(float PER) {
//        percantage = PER;
//    }*/
//    char GetLetterGrade() {
//        cout << "enter percantage: ";
//        cin >> percantage;
//        if (percantage >= 90 && percantage <= 100)
//        {
//            letter_grade = 'A';
//            return letter_grade;
//        }
//        else if (percantage >= 80 && percantage <= 89)
//        {
//            letter_grade = 'B';
//            return letter_grade;
//
//        }
//        else if (percantage >= 70 && percantage <= 79)
//        {
//            letter_grade = 'C';
//            return letter_grade;
//
//        }
//        else if (percantage >= 60 && percantage <= 69)
//        {
//            letter_grade = 'D';
//            return letter_grade;
//
//        }
//        else if (percantage < 60)
//        {
//            letter_grade = 'F';
//            return letter_grade;
//
//        }
//
//    }
//    
//};
//int main() {
//    undegraduate UG;
//    cout<<UG.GetLetterGrade()<<endl;
//
//
//}

//////////////small oprgram to calc the nth fibo number in fibo series/////////////////////
//int main()
//{
//    int flag=1;
//    while (flag!=0)
//    {
//        int arr[50] = { 1,1 }, n, z = 2;
//        cout << "enter the range: ";
//        cin >> n;
//        if (n == 1){ 
//            cout << arr[0];
//            cout << "continue: yes or no "<<endl;
//            cin >> flag;
//        }
//        else if (n == 2) {
//            cout << arr[1];
//            cout << "continue: yes or no "<<endl;
//            cin >> flag;
//        }
//        else {
//            for (int i = 0; i < n - 2; i++) {
//                arr[z] = arr[i] + arr[i + 1];
//                if (z == n - 1) {
//                    cout << "num " << z + 1 << " is: " << arr[z] << endl;
//
//                }
//                z++;
//            }
//            cout << "continue: yes or no "<<endl;
//            cin >> flag;
//        }
//    }
//}
////////////////////////////////////////////
//int main() {
   /* float n1=3.4;
    n1 = (int*)n1;*/
    //cout << n1 << endl;
    /*string my_name;
    my_name = "hello there";
    ///replace and substr fucntions work as follows you give it the stratign index and the length of the word you wanbt to replace// 
    cout << my_name.replace(6,4,"noman") << endl;*/
    //char name2[100];
    //scanf("%[^\n]s", &name2);
    ////printf("%s", name2);
    //cout << name2 << endl;
    //string name;
    //int arr[] = { 1,2,3,4,5,6 };
    ///*cout << "enter string: " << endl;
    //getline(cin, name);*/
    ////cout << name << endl;
    //int length = sizeof(arr) / sizeof(arr[0]);
    //cout << length << endl;
    //boolaplha to print alpha version of the true and false instead of 0 or 1//
   /* escape sequences \v vertival tab(not all ide's support it) \a audible bell after runing the program \\to print backslash \b delete prevoius char \" or \' is used to print single quote or double qoute since they are apparently reserved for strign or char indication  */
    /*bool minato = false;
    cout <<boolalpha<< minato << endl;*/
    //cout << "hello\athere";
        //int r;     
    /* cout << "enter character: ";
     cin >> r;
     r=int(r) + 1;*/
     //int x = r*1.0 / 2;
     //int n = 7+1,y=(r=2)+3;
     //cout <<"hello there"<<n;
     //replaced two valusWW
     //printf("value of n is:%i\nvalue of y is:%i\n ", y,n);
     //cout << "ascii code of r is: " <<r<<"\n";
     //cout << "ascii code of r is: " <<<<"\n";
     //cout << CHAR_MIN;
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
