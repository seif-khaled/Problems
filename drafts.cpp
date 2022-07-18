// drafts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class deque {
private:
	int front = -1;
	int rear = -1;
public:
	bool is_empty() {
		if (front==-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	void add_to_rear(int arr[], int size) {
		int element;
		cout << "enter number: ";
		cin >> element;
		if ((rear + 1) % size == front || front == 0 && rear == size - 1)
		{
			cout << "array is full";
		}
		else
		{
			if (front == -1 && rear == -1)
			{
				front = rear = 0;
				arr[rear] = element;
			}
			else
			{
				rear = (rear + 1) % size;
				arr[rear] = element;
			}

		}
	}
	void remove_from_front(int arr[], int size) {
		if (rear == -1 && front == -1)
		{
			cout << "remove item from empty array" << endl;
		}
		else
		{
			if (rear == 0 && front == 0)
			{
				front = rear = -1;
			}
			else
			{
				front = (front + 1) % size;
			}
		}
	}
	int show_front(int arr[], int size) {
		if (rear == -1 && front == -1)
		{
			cout << "cant show front elemnt array is empty: ";
			return -1;
		}
		else
		{
			return arr[front];
		}
	}
	int show_rear(int arr[], int size) {
		if (rear == -1 && front == -1)
		{
			cout << "cant show front elemnt array is empty: ";
			return -1;
		}
		else
		{
			return arr[rear];
		}
	}
	/*int front_returner() {
		return front;
	}
	int rear_returner() {
		return rear;
	}*/
	void display_deque(int arr[], int size) {
		if (rear > front) {
			for (int i = front; i <= rear; i++)
			{
				cout << arr[i] << " ";
			}
		}
		else if (front > rear) {
			for (int i = front; i < size; i++)
			{
				cout << arr[i] << " ";
			}
			for (int i = rear; i < front; i++)
			{
				cout << arr[i] << " ";
			}
		}
	}
};
int main() {
	int arr[150], size, i = 0;
	cout << "input size of array: ";
	cin >> size; 
	deque q;
	while (i < size)
	{
		q.add_to_rear(arr, size);
		i++;
	}
	q.remove_from_front(arr, size);
	q.display_deque(arr, size);
}
///circular queue////
//class circular_queue {
//private:
//	int front = -1;
//	int rear = -1;
//public:
//	void enqueue(int arr[],int size) {
//		int element;
//		cout << "enter number: ";
//		cin >> element;
//		if ((rear+1)%size==front||front==0 && rear==size-1)
//		{
//			cout << "array is full";
//		}
//		else
//		{
//			if (front==-1 && rear==-1)
//			{
//				front = rear = 0;
//				arr[rear] = element;
//			}
//			else
//			{
//				rear = (rear + 1) % size;
//				arr[rear] = element;
//			}
//			
//		}
//		/*else 
//		{
//			if (front == -1 && rear == -1)
//			{
//				front = rear = 0;
//			}
//			else
//			{
//				if (rear==size-1)
//				{
//					cout << "array is full cant enque more elemtns ";
//				}
//				else
//				{
//					rear++;
//					arr[rear] = element;
//				}
//			}
//		}	*/
//	}
//	void dequeue(int arr[], int size) {
//		if (rear==-1 && front==-1)
//		{
//			cout << "remove item from empty array"<<endl;
//		}
//		else
//		{
//			if (rear==0 && front==0)
//			{
//				front = rear = -1;
//			}
//			else
//			{
//				front=(front+1)%size;
//			}
//		}
//	}
//	int show_front(int arr[], int size) {
//		if (rear==-1 && front==-1)
//		{
//			cout << "cant show front elemnt array is empty: ";
//			return -1;
//		}
//		else
//		{
//			return arr[front];
//		}
//	}
//	int front_returner() {
//		return front;
//	}
//	int rear_returner() {
//		return rear;
//	}
//	void display_queue(int arr[], int size) {
//		if (rear > front) {
//			for (int i = front; i <= rear; i++)
//			{
//				cout << arr[i] << " ";
//			}
//		}
//		else if (front > rear) {
//			for (int i = front; i < size; i++)
//			{
//				cout << arr[i] << " ";
//			}
//			for (int i = rear; i <front; i++)
//			{
//				cout << arr[i]<<" ";
//			}
//		}
//	}
//	void reverse_first_five_elemnts(int arr[],int size) {
//		int length = size / 2;
//		int lenght_five_elemnts = length / 2;
//		int last_ele = length - 1;
//		int temp;
//		int first = front;
//		/*for (int i = front,; i < length; i++)
//		{
//			temp = arr[i];
//			arr[last_ele]=
//		}*/
//		while (first!= lenght_five_elemnts && last_ele!= lenght_five_elemnts)
//		{
//			temp = arr[first];
//			arr[first] = arr[last_ele];
//			arr[last_ele] = temp;
//			first++;
//			last_ele--;
//		}
//	}
//};
//int main() {
//	int arr[150], size, i=0;
//	cout << "input size of array: ";
//	cin >> size;
//	circular_queue q;
//	/*q.enqueue(arr,size);
//	q.enqueue(arr,size);
//	q.enqueue(arr,size);*/
//	//q.dequeue(arr, size);
//	//q.enqueue(arr,size);
//	while (i<size)
//	{
//		q.enqueue(arr,size);
//		i++;
//	}
//	//q.dequeue(arr,size);
//	//q.enqueue(arr, size);	
//	/*cout << q.show_front(arr, size) << endl;
//	cout<<q.front_returner()<<endl;
//	cout<<q.rear_returner()<<endl;*/
//	//q.dequeue(arr,size);
//	q.reverse_first_five_elemnts(arr,size);
//	q.display_queue(arr,size);
//	
//
//}
////normal queue/////
//class queue {
//private:
//    int front = -1;
//    int rear = -1;
//public:
//    void enqueue(int arr[],int size) {
//        int element;
//        cout << "enter elemnt";
//        cin >> element;
//        if (front==-1 && rear==-1)
//        {
//            front = rear = 0;
//            arr[rear] = element;
//        }
//        else
//        {
//            if (rear==size-1)
//            {
//                cout << "cant enqueue more elemnts array is full"<<endl;
//            }
//            else
//            {
//                rear++;
//                arr[rear] = element;
//            }
//            
//        }
//    }
//    void dequeue(int arr[],int size) {
//        if (front==-1 && rear==-1)
//        {
//            cout << "cant dequeue elements queue is empty already "<<endl;
//        }
//        else if(front==0 && rear==0)
//        {
//            front=rear=-1;
//        }
//        else
//        {
//            front++;
//
//        }
//    }
//    int show_first(int arr[], int size) {
//        if (rear==-1 && front==-1)
//        {
//            cout << "cant show front element, arr is empty: ";
//            return -1;
//        }
//        else
//        {
//            cout << "front most elment is: ";
//            return arr[front];
//        }
//    }
//    void print_queue(int arr[]) {
//        for (int i = front; i <= rear; i++)
//        {
//            cout << arr[i] << " ";
//        }
//    }
//};
//int main()
//{
//    int arr[500],size,i=0;
//    cout << "input the size of array: ";
//    cin >> size;
//    queue q;
//    while (i<size)
//    {
//        q.enqueue(arr,size);
//        i++;
//    }
//    q.dequeue(arr, size);
//    /*q.enqueue(arr, size, 15);
//    q.enqueue(arr, size, 13);
//    q.enqueue(arr, size, 12);*/
//    q.print_queue(arr);
//    //cout << "Hello World!\n";
//}
//int main() {
//	int x = 1;
//	int z = x+1 % 5;
//	cout << z;
//	//cout << x;
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
