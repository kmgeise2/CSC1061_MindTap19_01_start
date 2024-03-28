// MindTap 19-01 Starting code
// Write the definition of the function nodeCount 
// that returns the number of nodes in the binary tree.
// Add this function to the class binaryTreeType 
// and create a program to test this function.
// The main() is complete.
// 
// Create the binary tree with at least 10 nodes
// Data: 65 55 22 44 61 19 90 10 78 52 -999

#include <iostream>
#include "binarySearchTree.h"

using namespace std;

int main()
{
	// Create a binary search tree
	// Notice the class binarySearchTree inherits
	// from binaryTreeType, a pure virtual class
	bSearchTreeType<int>  treeRoot;

	// Collect tree data from user
	int num;
	cout << "Enter integers ending with -999" << endl;
	cin >> num;

	// Create the tree
	while (num != -999)
	{
		treeRoot.insert(num);
		cin >> num;
	}
	// treeNodeCount calls nodeCount
	// both are defined in the base class
	// both functions are not virtual
	// treeNodeCount() is complete
	// Write the code for nodeCount() 
	cout << "Number of Nodes: "
		<< treeRoot.treeNodeCount() << endl;
	
	return 0;
}