#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // contructor for the node class
    Node()
    {
        leftchild = nullptr;  // initialize left child to null
        rightchild = nullptr; // initialize right child to nill
    };
    BinaryTree()
    {
        ROOT = nullptr; // initialize root to null

        void insert()
        {
            int x;
            cout << "Masukkan nilai: ";
            cin >> x;
