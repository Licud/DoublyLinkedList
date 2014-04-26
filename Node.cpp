#include "node.hpp"

Node::Node(string d, Node *n, Node *p)
{	data = d;	
	next = n;
	previous = p;
}

const string Node::getData()
{	return data;
}

const Node* Node::getNext()
{	return next;
}

const Node* Node::getPrevious()
{	return previous;
}