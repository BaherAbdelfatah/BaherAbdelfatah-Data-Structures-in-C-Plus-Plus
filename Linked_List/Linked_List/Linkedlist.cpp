#include <iostream>
#include "Linkedlist.h"
using namespace std;

Linkedlist::Linkedlist(void)
{
	head = NULL;
	size = 0;
}

void Linkedlist::push_back(int data)
{
	if(head == NULL)
	{
		Node * temp = new Node(data);
		head = temp;
	}
	else
	{
		Node * temp = head;
		while(temp->next!=NULL)
			temp = temp->next;
		temp->next = new Node(data);
	}
	size++;
}

void Linkedlist::push_front(int data)
{
	Node * temp = new Node(data);
	temp->next = head;
	head = temp;
	size++;
}

void Linkedlist::insert(int data, int pos)
{
	if(pos < 0 || pos > size)
		return;

	if(pos == size)
	{
		push_back(data);
		return;
	}
	
	if(pos == 0)
	{
		push_front(data);
		return;
	}
	int index = 0;
	Node * newNode = new Node(data);
	Node * curr = head;
	Node * prev = curr;
	while((curr->next!=NULL)&&(index<pos))
	{
		prev = curr;
		curr = curr -> next;
		index++;
	}
	newNode->next = curr;
	prev->next = newNode;
	size++;
}

void Linkedlist::print()
{
	Node * temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp = temp->next;
	}
}

int Linkedlist::pop_back()
{
	if(head == NULL)
		return -1;
	Node * curr = head;
	Node * prev = curr;
	while(curr->next != NULL)
	{
		prev = curr;
		curr = curr->next;
	}
	int data = curr->data;
	delete curr;
	prev->next = NULL;
	size--;
	return data;
}

int Linkedlist::pop_front()
{
	if(head == NULL)
		return -1;
	Node * temp = head;
	head = head->next;
	int data = temp->data;
	delete temp;
	size--;
	return data;
}

void Linkedlist::remove(int pos)
{
	if(pos < 0 || pos >= size)
		return;

	if(pos == size-1)
	{
		pop_back();
		return;
	}
	
	if(pos == 0)
	{
		pop_front();
		return;
	}
	int index = 0;
	Node * curr = head;
	Node * prev = curr;
	while((curr->next!=NULL)&&(index<pos))
	{
		prev = curr;
		curr = curr -> next;
		index++;
	}
	prev->next = curr->next;
	delete curr;
	size--;
}

bool Linkedlist::is_empty()
{
	return (size == 0)?true:false;
}

int Linkedlist::list_size()
{
	return size;
}

Linkedlist::~Linkedlist(void)
{
}
