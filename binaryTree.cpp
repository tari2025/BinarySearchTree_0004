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
            // step 1: allocate memory for the new node
            Node *NewNode = new Node();

            // step 2 :AssignValue to the data field of the new node
            nedNode->info = x;

            // step 3:Make the left and right child of the new node poihnt to null
            newNode->leftchild = nullptr;
            newNode->rightchild = nullptr;