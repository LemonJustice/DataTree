#pragma once

#ifndef TREE_H
#define TREE_H

#include <iostream>
using namespace std;

class Tree {
public:
	class Node {
	public:
		Node() : left(nullptr), right(nullptr), data(0) {}
		Node(int val) : left(nullptr), right(nullptr), data(val) {}
		int data;
		Node* left, * right;
	};
	Tree() : count(0), root(nullptr) {}
	bool insert(int newVal);
	friend ostream& operator << (ostream& str, const Tree& tree);  // calls print and 
																   // outputs count
private:
	void print(ostream& ostr, Node* curNode) const;  // recursive function
	Node* root;
	int count;
};

#endif
