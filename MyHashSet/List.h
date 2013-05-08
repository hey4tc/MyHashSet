#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

class List
{
public:
	List(void);
	bool exists(int i);
	bool insert(Node * pNewNode);
	bool insert(int i);
	bool deleteNode(int i);
	void printList(ostream& os);
	int getLen();
	~List(void);

protected:
	Node * m_pHead;
	int m_length;

};
