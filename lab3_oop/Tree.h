#include "Node.h"
#include <string>
using std::string;
class Tree {
public:
    Tree(int v);        //constructor
    Tree();
    ~Tree();        //destructor
    void insert(int v);    //insert my root
    void remove(int v);     //remove root
    string inorder();
    string preorder();
    string postorder();
    unsigned int countNodes();
    unsigned int countEdges();
    unsigned int countLeafs();
    unsigned int height();

private:
    void insert(int v, Node* node);     //insert a node in my tree  
    string inorder(Node* node);     //show my tree in inorder
    string preorder(Node* node);        //show my tree in preorder
    string postorder(Node* node);       //show my tree in postorder
    unsigned int countNodes(Node* node);     //count the number of nodes
    unsigned int countEdges(Node* node);    // count the number of edges
    unsigned int countLeafs(Node* node);    // count the number of leafs
    unsigned int height(Node* node);    //count the height of my tree
    Node* getMinNode(Node* node);
    Node* remove(int v, Node* node);        //delete a node from my tree
    Node* root;
};


