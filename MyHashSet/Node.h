#pragma once
#include <iostream>
using namespace std;

class Node
{
public:
	Node(void);
	Node(int data);
	~Node(void);
	void setData(int newData);
	int getData() const;
	void setNext(Node * next);
	Node * getNext();
	void printNode(ostream& os) ;
	

protected:
	int m_data;
	Node * m_next;
};

