// Class Name: Program 6: Data Tree 
// Author: Liam Kikuchi
// Section: S
// Description: A modified version of a linked list
// that compliments binary search systems. A value 
// left if it is smaller than the node's data, or
// right if it is bigger. The print function prints
// all values in the list from smallest to biggest.

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

	system("pause");
} 

/*
Insert into empty tree: 6

Root -> Inserted on right: 9

Root -> Inserted on left: 3

Root -> Left -> Inserted on right: 5

Root -> Left -> Right -> Discarded duplicate value: 5

Root -> Right -> Inserted on left: 7

Root -> Left -> Inserted on left: 2

Root -> Right -> Inserted on right: 10

Root -> Left -> Right -> Inserted on left: 4

Root -> Left -> Left -> Inserted on left: 1

Root -> Right -> Left -> Inserted on right: 8

1 2 3 4 5 6 7 8 9 10
Count: 10
Press any key to continue . . .
*/