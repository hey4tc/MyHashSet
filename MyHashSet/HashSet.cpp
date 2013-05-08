#include "StdAfx.h"
#include "HashSet.h"

HashSet::HashSet(void)
{
	m_size = 0;
}

HashSet::~HashSet(void)
{
}

int HashSet::getHash(int i) {
	return i % ARRAY_SIZE;
}

int HashSet::getSize() {
	return m_size;
}

bool HashSet::insert(int i) {
	int index = getHash(i);
	List & ls = m_hashArray[index]; 
	bool rs = ls.insert(i);
	if(rs)
		m_size++;
	return rs;
}

bool HashSet::exists(int i) {
	int index = getHash(i);
	List & ls = m_hashArray[index]; 
	return ls.exists(i);
}

bool HashSet::remove(int i) {
	int index = getHash(i);
	List & ls = m_hashArray[index]; 
	bool rs = ls.deleteNode(i);
	if (rs)
		m_size--;
	return rs;
}

void HashSet::printHashSet(ostream & os) {
	for (int i=0; i<ARRAY_SIZE; i++)
	{
		m_hashArray[i].printList(os);	
	}
}