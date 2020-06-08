#include <iostream>
#include "BSTNode.h"
using namespace std;

int main() {
	int root = 15;
	int child1 = 7;
	int child2 = 30;
	int leaf1_child1 = 4;
	int leaf2_child1 = 8;
	int leaf1_child2 = 25;
	int leaf2_child2 = 34;
	BST<int> drzewo;
	drzewo.insert(root);
	drzewo.insert(child1);
	drzewo.insert(child2);
	drzewo.insert(leaf1_child1);
	drzewo.insert(leaf1_child2);
	drzewo.insert(leaf2_child1);
	drzewo.insert(leaf2_child2);

	drzewo.BSTPrint();
	drzewo.SumNode();
	cout << drzewo.MaksBST()->Data << endl;
	cout << drzewo.MinBST()->Data << endl;

	system("pause");
	return 0;
}