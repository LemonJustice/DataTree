#include "Tree.h"

bool Tree::insert(int newVal) {
	Node* newNode = new Node(newVal);
	if (root == nullptr) {
		root = newNode;

		cout << "Insert into empty tree: " << newVal << "\n\n";
		count++;

		return true;
	}
	Node* curNode = root;
	cout << "Root -> ";
	while (true) {
		if (newVal < curNode->data) {
			if (curNode->left == nullptr) {
				curNode->left = newNode;

				cout << "Inserted on left: " << newVal << "\n\n";
				count++;

				return true;
			}
			cout << "Left -> ";
			curNode = curNode->left;
		}
		else if (newVal > curNode->data) {
			if (curNode->right == nullptr) {
				curNode->right = newNode;

				cout << "Inserted on right: " << newVal << "\n\n";
				count++;

				return true;
			}
			cout << "Right -> ";
			curNode = curNode->right;
		}
		else {
			cout << "Discarded duplicate value: " << newVal << "\n\n";
			return false;
		}
	}
}

void Tree::print(ostream& ostrm, Node* curNode) const {
	if (curNode->left != nullptr)
		print(ostrm, curNode->left);
	ostrm << curNode->data << " ";
	if (curNode->right != nullptr)
		print(ostrm, curNode->right);
}

ostream& operator<<(ostream& ostrm, const Tree& tree) {
	tree.print(ostrm, tree.root);
	ostrm << "\nCount: " << tree.count << endl;
	return ostrm;
}