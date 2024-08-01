// Program name: Simple Binary Tree
// Purpose: Create a simple binary tree using structures
// Author: Nabeel Alkhatib
// Date last modified: 4/26/2018

#include <iostream>
using namespace std;
#include <cstring>



/*
Fill out the code based off the attached template. I am giving you the functions to use. You may choose a 
different approach, but I would recommend at least using the provided code as a starting point. Test your 
program with the given driver. You are to insert nodes, display the tree a few times, find some nodes, 
delete some nodes, display the tree, insert some nodes again, and finally display the tree again. I highly 
recommend not doing everything thing at once! Comment out some of the code and test things out as you code. 
It is okay to pull command out entirely, just be sure your final product has the full driver working.

When you turn in your code, also answer the following:
1. What is the purpose of the function findParentNode? Why is the findNode not sufficient for this assignment?
2. Draw out (by hand or using ASCII art) the final version of the binary tree. This is after all insertions 
   and deletions and insertions and such. (Hint: this is a very good thing to have handy while you are writing 
   the program).
*/

struct TreeNode
{
	string value; //or something else!
	int age;
	TreeNode *left;
	TreeNode *right;
};

// Generally, pass by reference the pointers to the nodes!
string nodeValue(TreeNode *nodePtr);
void displayInOrder(TreeNode *nodePtr);
void displayPreOrder(TreeNode *nodePtr);
void displayPostOrder(TreeNode *nodePtr);
void insert(TreeNode *&nodePtr, TreeNode *&newNode);
void insertNode(TreeNode *&rootNode, string value, int age);
TreeNode* findNode(TreeNode *&rootNode, string value);
TreeNode* findParentNode(TreeNode *&rootNode, string value);
void deleteNode(TreeNode *&rootNode, string value);




int main()
{
	// Display a program heading
	cout << "Binary Tree!" << endl << endl;

	TreeNode *rootNode = new TreeNode;
	string tmpValue = "Fred";
	int tmpAge = 52;
	rootNode->value = tmpValue;
	rootNode->age = tmpAge;
	rootNode->left = 0;
	rootNode->right = 0;
	
	// Now add some nodes...
	insertNode(rootNode, "Barney", 87);
	insertNode(rootNode, "Wilma", 63);
	insertNode(rootNode, "Bamm Bamm", 13);
	insertNode(rootNode, "Pebbles", 92);
	insertNode(rootNode, "Gazoo", 98);
	insertNode(rootNode, "wilma", 87);
	insertNode(rootNode, "Dino", 5);
	insertNode(rootNode, "Pearl", 52);
	cout << endl;
	
	// Let's do some displays!
	cout << "Displaying nodes in order: " << endl;
	displayInOrder(rootNode);
	cout << endl << endl;
	
	cout << "Displaying nodes in PRE order: " << endl;
	displayPreOrder(rootNode);
	cout << endl << endl;
	
	cout << "Displaying nodes in POST order: " << endl;
	displayPostOrder(rootNode);
	cout << endl << endl;

	// Check to make sure the find function works...
	TreeNode *tmpNode;
	tmpValue = "Bozo";
	tmpNode = findNode(rootNode, tmpValue);
	string result = (tmpNode != NULL) ? " WAS " : " NOT ";
	cout << "Node " << tmpValue << result << "found!" << endl;
	
	tmpValue = "Wilma";
	tmpNode = findNode(rootNode, tmpValue);
	result = (tmpNode != NULL) ? " WAS " : " NOT ";
	cout << "Node " << tmpValue << result << "found!" << endl;
	cout << endl;
	
	cout << "Displaying nodes in order:\n";
	displayInOrder(rootNode);
	cout << endl;

	// Now for the deletion nodes... Make sure all variations work!
	tmpValue = "Barney";
	cout << "Attempting to delete node " << tmpValue << endl;
	deleteNode(rootNode, tmpValue);
	cout << endl;
	
	tmpValue = "wilma";
	cout << "Attempting to delete node " << tmpValue << endl;
	deleteNode(rootNode, tmpValue);
	cout << endl;
	
	cout << "Displaying nodes in order: " << endl;
	displayInOrder(rootNode);
	cout << endl << endl;

	// Thank the user (it is always good to be polite!)
	cout << "Thank you!" << endl;
	return 0;
}

/////////////////////////////////////////////////////////////////
// Display the value (whatever type it might be!!) of the node...
string nodeValue(TreeNode *nodePtr)
{
	return nodePtr->value;

}

///////////////////////////////////////////////////////////
// Display the values in the subtree pointed to by nodePtr, 
// via inorder traversal.
void displayInOrder(TreeNode *nodePtr)
{
	/////////////////////
	// FILL THIS IN!!! //
	/////////////////////
	if (nodePtr) {
		displayInOrder(nodePtr->left);
		cout << nodePtr->value << "(" << nodePtr->age << ")\n";
		displayInOrder(nodePtr->right);
	}
}


///////////////////////////////////////////////////////////
// Display the values in the subtree pointed to by nodePtr, 
// via preorder traversal.
void displayPreOrder(TreeNode *nodePtr)
{
	/////////////////////
	// FILL THIS IN!!! //
	/////////////////////
	if (nodePtr) {
		cout << nodePtr->value << "(" << nodePtr->age << ")\n";
		displayPreOrder(nodePtr->left);
		displayPreOrder(nodePtr->right);
	}
	
}

///////////////////////////////////////////////////////////
// Display the values in the subtree pointed to by nodePtr, 
// via postorder traversal.
void displayPostOrder(TreeNode *nodePtr)
{
	/////////////////////
	// FILL THIS IN!!! //
	/////////////////////
	if (nodePtr) {
		displayPostOrder(nodePtr->left);
		displayPostOrder(nodePtr->right);
		cout << nodePtr->value << "(" << nodePtr->age << ")\n";	
	}
}

/////////////////////////////////////////////////////////////
// insert accepts a TreeNode pointer and a pointer to a node.
// The function inserts the node into the tree pointed to by
// the TreeNode pointer. This function is called recursively.
void insert(TreeNode *&currentNode, TreeNode *&newNode)
{
	/////////////////////
	// FILL THIS IN!!! //
	/////////////////////
	if(currentNode == 0)
	{
		currentNode = new TreeNode;
		currentNode->left =0;
		currentNode->right =0;
		currentNode->value = newNode->value;
		currentNode->age = newNode->age;
		cout << "Inserted node value of " << currentNode->value << "(" << currentNode->age << ")" << endl;
	}
	else{
		TreeNode *back = 0;
		TreeNode *p = currentNode;
		while (p != 0)
		{
			back = p;
			if(p->value > newNode->value)
				p=p->left;
			else 
				if (p->value < newNode->value)
					p=p->right;
				else {
					cout << "Duplicate value found for " << p->value << " (" << p->age << "). Node not inserted\n";
					return;
				}
		}
		if (back->value > newNode->value)
			back->left=newNode;
		else back->right=newNode;
		cout << "Inserted node value of " << newNode->value << " (" << newNode->age << ")" << endl;
	}
}

//////////////////////////////////////////////////////////
// insertNode creates a new node to hold num as its value,
// and passes it to the insert function.
void insertNode(TreeNode *&rootNode, string value, int age)
{
	/////////////////////
	// FILL THIS IN!!! //
	/////////////////////
	TreeNode *p;
	p = new TreeNode;
	p->value = value;
	p->age = age;
	p-> left = 0;	
	p-> right = 0;
	insert(rootNode,p);
}

///////////////////////////////////////////////
// findNode determines if a value is present in
// the tree. If so, the function returns the node.
// Otherwise, it returns NULL.
TreeNode* findNode(TreeNode *&rootNode, string value)
{
	/////////////////////
	// FILL THIS IN!!! //
	/////////////////////
	TreeNode *p = rootNode;
	while (p) {
		if (p->value > value)
			p = p->left;
		else
			if (p->value < value)
				p = p->right;
			else
				return p;
	}
	return NULL;
}

/////////////////////////////////////////////////////
// findParentNode determines if a value is present in
// the tree. If so, the function returns the parent of the node.
// Otherwise, it returns NULL.
TreeNode* findParentNode(TreeNode *&rootNode, string value)
{
	/////////////////////
	// FILL THIS IN!!! //
	/////////////////////
	TreeNode *p = rootNode, *parent=0;
	while (p) {
		if (p->value > value) {
			parent = p;
			p = p->left;
		}
		else {
			if (p->value < value) {
				parent = p;
				p = p->right;
			}
			else return parent;
		}
	}
	return NULL;
}

///////////////////////////////////////////////////////////////
// deleteNode finds the node in the tree that is to be deleted.
// The node is removed and the branches of the tree below
// the node are reattached.
// When the node has two children, be careful! Move up the node 
// from the right side, and then the bottom leftmost node to
// repace the deleted node. This is the tricky part!!!
void deleteNode(TreeNode *&rootNode, string value)
{
	/////////////////////
	// FILL THIS IN!!! //
	/////////////////////
	if (!rootNode) return;	// if binary tree is empty the return
	TreeNode *p = findNode(rootNode, value);	// p is not the node to be deleted
	if (!p) {
		cout << "Node " << value << " is not found\n";
		return;
	}
	TreeNode *parent = findParentNode(rootNode, value);
	// deleting a leaf
	if (!p->left && !p->right) {
		cout << "deleting node " << p->value << "(" << p->age << ") with no children\n";
		if (parent)
			if (parent->left == p) parent->left = 0;
			else parent->right = 0;
		else
			rootNode = 0;
		delete p;
		return ;
	}
	//deleting a node with a single child
	// 1) the right child is missing
	if (!p->right) {
		cout << "Deleting node " << p->value << "(" << p->age << ")";
		cout << " on left side only\n";
		if (parent)
			if (parent->left == p) parent->left = p->left;
			else parent->right = p->left;
		else rootNode = p->left;
		delete p;
		return;
	}
	// 2) left child is missing
	if (!p->left) {
		cout << "Deleting node " << p->value << "(" << p->age << ")";
		cout << " on right side only\n";
		if (parent)
			if (parent->left == p) parent->left = p->right;
			else parent->right = p->right;
		else rootNode = p->right;
		delete p;
		return;
	}
	// deleting a node with two children
	cout << "Deleting node " << p->value << "(" << p->age << ") children on both sides" << endl;
	TreeNode *q = p->right;
	cout << "Looking at node " << q->value << endl;	
	parent = p;
	while (q->left) {
		parent = q;
		q = q->left;
	}
	p->value = q->value;
	if (parent == p) parent->right = q->right;
	else parent->left = q->right;
	q->right = 0;
	q->left = 0;
	delete q;
	return;
}