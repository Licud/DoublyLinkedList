#include <iostream>
#include <string>

using namespace std;

class Node
{	public:
		Node(string, Node*, Node*);
		const string getData();
		Node* getNext();
		Node* getPrevious();	
		void setPrevious(Node*);
		void setNext(Node*);
		void setData(string &);
	private:
		string data;
		Node *next;
		Node *previous;
};