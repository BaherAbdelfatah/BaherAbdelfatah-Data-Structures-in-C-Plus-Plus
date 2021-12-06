#include <iostream>
#include "Linkedlist.h"
using namespace std;

int main()
{
	Linkedlist list;
	list.push_back(2);   // 2
	list.push_back(3);   // 2 3
	list.push_back(5);   // 2 3 5
	list.push_back(6);   // 2 3 5 6
	list.push_front(1);	 // 1 2 3 5 6
	list.insert(4,3);    // 1 2 3 4 5 6
	list.remove(6);
	list.print();
    
	return 0;
}