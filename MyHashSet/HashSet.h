#pragma once
#include "List.h"

#define ARRAY_SIZE 10 

class HashSet
{
public:
	HashSet(void);
	~HashSet(void);
	int getHash(int i);
	int getSize();

	bool insert(int i);
	bool exists(int i);
	bool remove(int i);

	void printHashSet(ostream & os);

protected:
	List  m_hashArray[ARRAY_SIZE];
	int m_size;
};
