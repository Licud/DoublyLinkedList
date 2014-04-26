#include <iostream>
#include <string>

using namespace std;

class Node
{	public:
		Node(string, Node*, Node*);
		const string getData();
		const Node* getNext();
		const Node* getPrevious();	
	private:
		string data;
		Node *next;
		Node *previous;
};