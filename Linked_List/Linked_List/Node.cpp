#include <iostream>
#include "Node.h"

Node::Node(void)
{
	data = 0;
	next = NULL;
}

Node::Node(int data)
{
	this->data = data;
	this->next = NULL;
}

Node::~Node(void)
{
}
