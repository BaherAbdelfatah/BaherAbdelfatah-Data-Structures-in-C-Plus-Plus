#pragma once
#include "Node.h"
class Linkedlist
{
private:
	Node * head;
	int size;
public:
	Linkedlist(void);
	~Linkedlist(void);
	void push_back(int data);
	void push_front(int data);
	int pop_back();
	int pop_front();
	void remove(int pos);
	bool is_empty();
	int list_size();
	void insert(int data, int pos);
	void print();
};

