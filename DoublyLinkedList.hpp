#include <iostream>
#include <string>
#include "Node.hpp"

using namespace std;

class DoublyLinkedList
{	public:
		void removeHead();
		void removeTail();
		void insertNewHead(Node*);
		void insertNewTail(Node*);
		const int getSize();
		const void traverse();
	private:
		int size = 0;
		Node *head = NULL;
		Node *tail = NULL;
};