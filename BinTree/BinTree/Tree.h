

#ifndef TREE_H
#define TREE_H

#include "Queue.h"

class Tree
{
public:
    Node* root;
    Tree()
    {
        root = 0;
    }
    void CreateTree();
    Node* generateFromTraversal(int* inorder, int* preorder, int inStart, int inEnd);
    void Preorder(Node* p);
    void Inorder(Node* p);
    void Postorder(Node* p);
    void Levelorder(Node* p);
    int Height(Node* root);
};

#endif