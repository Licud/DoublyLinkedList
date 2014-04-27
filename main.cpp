#include <iostream>
#include <string>
#include "DoublyLinkedList.hpp"

using namespace std;

void mainMenu();
void addHead();
void addTail();
void deleteHead();
void deleteTail();
void viewSize();
void displayList();

DoublyLinkedList dll;

void mainMenu()
{	int choice = 0;
	do{
		cout << '\n' << "Please enter a choice." << endl;
		cout << "1. Add to the head." << endl;
		cout << "2. Add to the tail." << endl;
		cout << "3. Delete the head." << endl;
		cout << "4. Delete the tail." << endl;
		cout << "5. View the size of the list" << endl;
		cout << "6. Display the list." << endl;
		cout << "0. Exit the system." << endl;
		cin >> choice;
		cin.ignore();
		switch(choice)
		{	case 1: addHead();
				break;
			case 2: addTail();
				break;
			case 3: cout << "test 3" << endl;
				break;
			case 4: deleteTail();
				break;
			case 5: viewSize();
				break;
			case 6: displayList();
				break;
			default: cout << "Please select a number from the choices." << endl;
				break;
		}
	}while(choice != 0);
}

void addHead()
{	string data;
	cout << "Please enter the string you want to store." << endl;
	getline(cin, data);
	Node *toAdd = new Node(data, NULL, NULL);
	dll.insertNewHead(toAdd);
}

void addTail()
{	string data;
	cout << "Please enter the string you want to store." << endl;
	getline(cin, data);
	Node *toAdd = new Node(data, NULL, NULL);
	dll.insertNewTail(toAdd);
}

void deleteHead()
{	dll.removeHead();
}

void deleteTail()
{ 	dll.removeTail();
}

void viewSize()
{	cout << "Current List size: " << dll.getSize() << endl;
}

void displayList()
{	dll.traverse();
}

int main()
{	mainMenu();
	return 0;
}