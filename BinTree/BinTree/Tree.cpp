

#include "Tree.h"
#include "Queue.h"
#include <iostream>

using namespace std;

void Tree::CreateTree()
{
    Node* p, * t;
    int x;
    Queue q(50);

    cout << "Enter root value" << endl;
    cin >> x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);

    while (!q.isEmpty())
    {
        p = q.dequeue();
        cout << "Enter left child value" << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }

        cout << "Enter right child value" << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }

    }

}

int searchInorder(int inArray[], int inStart, int inEnd, int data)
{
    for (int i = inStart; i <= inEnd; i++) {
        if (inArray[i] == data) {
            return i;
        }
    }
    return -1;
}

Node* Tree::generateFromTraversal(int* inorder, int* preorder, int inStart, int inEnd)
{

    static int preIndex = 0;

    if (inStart > inEnd) {
        return nullptr;
    }

    Node* node = new Node(preorder[preIndex++]);

    if (inStart == inEnd) {
        return node;
    }

    int splitIndex = searchInorder(inorder, inStart, inEnd, node->data);
    node->lchild = generateFromTraversal(inorder, preorder, inStart, splitIndex - 1);
    node->rchild = generateFromTraversal(inorder, preorder, splitIndex + 1, inEnd);

    return node;
}

void Tree::Preorder(Node* p)
{
    if (p)
    {
        cout << p->data << endl;
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void Tree::Inorder(Node* p)
{
    if (p)
    {
        Inorder(p->lchild);
        cout << p->data << endl;
        Inorder(p->rchild);
    }
}

void Tree::Postorder(Node* p)
{
    if (p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout << p->data << endl;
    }
}

void Tree::Levelorder(Node* p)
{
    Queue q(50);

    cout << p->data << endl;
    q.enqueue(root);

    while (!q.isEmpty())
    {
        p = q.dequeue();
        if(p->lchild)
        {
            cout << p->lchild->data << endl;
            q.enqueue(p->lchild);
        }
        if (p->rchild)
        {
            cout << p->rchild->data << endl;
            q.enqueue(p->rchild);

        }
    }
}

int Tree::Height(Node* p)
{
    int x = 0, y = 0;
    if (p == 0)
    {
        return 0;
    }

    x = Height(p->lchild);
    y = Height(p->rchild);
    if (x > y)
    {
        return x + 1;
    }
    else
    {
        return y + 1;
    }
}


