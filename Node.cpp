#include "node.hpp"

Node::Node(string d, Node *n, Node *p)
{	data = d;	
	next = n;
	previous = p;
}

const string Node::getData()
{	return data;
}

Node* Node::getNext()
{	return next;
}

Node* Node::getPrevious()
{	return previous;
}

void Node::setPrevious(Node* prev)
{	previous = prev;
}

void Node::setNext(Node* n)
{	next = n;
}