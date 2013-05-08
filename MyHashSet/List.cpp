#include "StdAfx.h"
#include "List.h"

List::List(void)
{
	m_pHead = new Node(0);
	m_length = 0;
}

bool List::exists(int i) {
	Node * p = m_pHead->getNext();
	int count = 0;
	while (p != NULL)
	{
		if (p->getData() == i)
			break;
		p = p->getNext();
		count++;
	}
	if(count < m_length)
		return true;
	else
		return false;
}

bool List::insert(Node * pNewNode) {
	if (!exists(pNewNode->getData()))
	{
		pNewNode->setNext(m_pHead->getNext());
		m_pHead->setNext(pNewNode);
		m_length++;
		return true;
	}
	return false;
}

bool List::insert(int i) {
	Node * pNode = new Node(i);
	return insert(pNode);
}

bool List::deleteNode(int i) {
	if (exists(i))
	{
		Node * p = m_pHead;
		while (p!=NULL && p->getNext() !=NULL)
		{
			if (p->getNext()->getData()==i)
			{
				Node * q = p->getNext();
				p->setNext(q->getNext());
				delete q;
			} else {
				p = p->getNext();
			}
		}
		m_length--;
		return true;
	}
	return false;
}

void List::printList(ostream& os) {
	Node * p = m_pHead->getNext();
	while (p != NULL)
	{
		p->printNode(os);
		p = p->getNext();
	}
	cout<<endl;
}

int List::getLen() {
	return m_length; 
}

List::~List(void)
{
	Node * p = m_pHead->getNext();
	Node * q = NULL;
	while (p != NULL)
	{
		q = p->getNext();
		delete p;
		p = q;
	}
	delete m_pHead;
}
