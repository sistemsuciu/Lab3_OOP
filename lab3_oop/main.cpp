#include <iostream>
#include "Tree.h"

int test_countNodes()
//I test the number of Nodes
{
	Tree tree(10);
	tree.insert(5);
	tree.insert(12);
	if (tree.countNodes() == 3)
		return 1;
	return 0;
}
int test_countEdges()
{//I test the number of Edges
	Tree tree(10);
	tree.insert(5);
	tree.insert(12);
	if (tree.countEdges() == 2)
		return 1;
	return 0;
}
int test_countLeafs()
{//I test the number of Leafs
	Tree tree(10);
	tree.insert(5);
	tree.insert(12);
	if (tree.countNodes() == 3)
		return 1;
	return 0;
}
int test_countHeight()
{ //I test the height of my binary tree
	Tree tree(10);
	tree.insert(5);
	tree.insert(12);
	if (tree.height() == 2)
		return 1;
	return 0;
}

int main() {
	Tree tree(40); //I set my root
	unsigned int n;
	tree.insert(20);
	tree.insert(10);
	tree.insert(2);
	tree.insert(200);

	tree.insert(3);
	tree.insert(100);
	tree.insert(150);
	std::cout << "The Binary tree" << std::endl;

	std::cout << "Inorder: " << std::endl;
	std::cout << tree.inorder() << std::endl;


	std::cout << "Postorder: " << std::endl;
	std::cout << tree.postorder() << std::endl;


	std::cout << "Preorder: " << std::endl;
	std::cout << tree.preorder() << std::endl;


	n = tree.countNodes();
	std::cout << "Nodes: " << n << std::endl;

	n = tree.countEdges();
	std::cout << "Edges: " << n << std::endl;

	n = tree.countLeafs();
	std::cout << "Leaf: " << n << std::endl;

	n = tree.height();
	std::cout << "Height: " << n << std::endl;

	tree.remove(20);
	tree.remove(150);


	if (test_countEdges() == 1) std::cout << "It works" << std::endl;
	else std::cout << "It doesn't work" << std::endl;

	if (test_countNodes() == 1) std::cout << "It works" << std::endl;
	else std::cout << "It doesn't work" << std::endl;

	if (test_countHeight() == 1) std::cout << "It works" << std::endl;
	else std::cout << "It doesn't work" << std::endl;

	if (test_countLeafs() == 1) std::cout << "It works" << std::endl;
	else std::cout << "It doesn't work" << std::endl;
}
