/* 
it is a binary tree where we use linked list but the node points to two other node using "left" and "right"
pointers. 

but these node can point to infinite number of nodes but we'll only take two. 

full = when all the nodes point to zero or two nodes
perfect = any nodes are completely filled (it'll look symmetrical) 



there are parent nodes and they have children (both children are siblings). the bottom most children are called leaf.
*/

/*   
if the child node value is greater than the parent node then it has to be placed to the right. else to the left

and the child which has larger value goes to the right. 

we need to look from top to bottom of the tree to find a place for the new node.
*/


/*
The big(o) is O(log n)  which is very efficient and is achieved through divide and conquer.



*/

#include <iostream>
using namespace std;

class Node{
    public:
        Node* left;
        Node* right;
        int value;

    Node(int value){
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};


class BinarySearchTree{
    public:         // made this public to access the root.
        Node* root;

    public:   
      /*        
      
      we used this but we can also do that 
      we can call an empty tree with root pointing to nullptr and add nodes later.
      we can also use this for linked list but putting head and tail equal to nulltpr
      BinarySearchTree(int value){       
            Node* newNode = new Node(value);
            root = newNode;
        }
      */ 
        BinarySearchTree(){       
            root = nullptr;
        }
      
};

int main(){
    BinarySearchTree* myBST = new BinarySearchTree();
    cout<<"Root: "<< myBST->root;
}