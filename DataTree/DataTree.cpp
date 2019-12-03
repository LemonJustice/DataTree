// DataTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Tree.h"
using namespace std;

int main()
{
	Tree tree;

	tree.insert(6);
	tree.insert(9);
	tree.insert(3);
	tree.insert(5);
	tree.insert(5);
	tree.insert(7);
	tree.insert(2);
	tree.insert(10);
	tree.insert(4);
	tree.insert(1);
	tree.insert(8);

	cout << tree;
} 