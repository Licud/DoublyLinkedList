#include "DoublyLinkedList.hpp"	

void DoublyLinkedList::removeHead()
{	if(size > 1){
		Node *temp = head -> getNext();
		temp -> setPrevious(NULL);
		delete head;
		head = temp;
		size -= 1;
	}else if(size == 1){
		delete head;
		head = 0;
		size -= 1;
	}else{
		cout << "The linkedlist is empty!" << endl;
	}
}

void DoublyLinkedList::removeTail()
{	if(size > 1){
		Node *tempOne = tail -> getPrevious();
		Node *tempTwo = tail;
		tempOne -> setNext(NULL);
		tail = tempOne;
		delete tempTwo;
		size -= 1;
	}else if(size == 1){
		delete head;
		head = 0;
		size -= 1;
	}else{
		cout << "The linkedlist is empty!" << endl;
	}
	cout << "String removed succesfully!" << endl;
}

void DoublyLinkedList::insertNewHead(Node* nHead)
{	if(head == NULL){
		head = nHead;
		tail = nHead;
	}else{
		head -> setPrevious(nHead);
		nHead -> setNext(head);
		head = nHead;
	}
	size += 1;
	cout << "String inserted succesfully!" << endl;
}

void DoublyLinkedList::insertNewTail(Node* nTail)
{	if(head == NULL){
		insertNewHead(nTail);
	}else{
		tail -> setNext(nTail);
		nTail -> setPrevious(tail);
		tail = nTail;
		size += 1;
	}
	cout << "String inserted succesfully!" << endl;
}

const int DoublyLinkedList::getSize()
{	return size;
}

const void DoublyLinkedList::traverse()
{	if(size != 0){
		Node *temp = head;
		int index = 0;
		cout << '\n' << "Linklist data: " << endl;
		while(temp != NULL)
		{	cout << index << ": " << temp -> getData() << endl;
			temp = temp -> getNext();
			index++;
		}
		cout << '\n';
	}else{
		cout << "The linkedlist is empty" << endl;
	}
}