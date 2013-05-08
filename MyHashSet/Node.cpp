#include "StdAfx.h"
#include "Node.h"

Node::Node(void)
{
}

Node::Node(int data)
{
	m_data = data;
	m_next = NULL;
}

Node::~Node(void)
{
	m_data = 0;
	m_next = NULL;
}

void Node::setData(int newData) {
	this->m_data = newData;
}

int Node::getData() const {
	return m_data;
}

void Node::setNext(Node * next) {
	m_next = next;
}

Node * Node::getNext() {
	return m_next;
}

void Node::printNode(ostream &os) {
	os<<"\t"<<m_data;
}
