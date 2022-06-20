// BinTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Queue.h"
#include "Tree.h"


using namespace std;


int main()
{
  
    Tree t;

    int preorder[] = { 1, 2, 4, 5, 3};
    int inorder[] = { 4, 2, 5, 1, 3 };


    Node* T = t.generateFromTraversal(inorder, preorder, 0, sizeof(inorder) / sizeof(inorder[0]) - 1);
    t.Preorder(T);

    return 0;


    //t.CreateTree();
    //cout << "Height of tree is: " << t.Height(t.root) << endl;
    /*cout << "Inorder: " << endl;
    t.Inorder(t.root);
    cout << "Levelorder: " << endl;
    t.Levelorder(t.root);
    cout << "Postorder: " << endl;
    t.Postorder(t.root);
    cout << "Preorder: " << endl;
    t.Preorder(t.root);*/


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
