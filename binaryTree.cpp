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
            // step 4: locate the node which will be the parent of the node to be inserted
            node *parent = nullptr;
            node *currentNode = nullptr;
            search(x, parent, current_exceptionNode);
            // step 5: if parent is null (tree is empty)
            if (parent == nullptr)
                ;

            // 5a:mark the new node as ROOT
            ROOT = newNode;
            // 5b: exit
            return;
        }
        // step 6 :if the value in the data field of new node is less than the value in the data field of the currend node
        if (x < parent->info)
            // 6a: make the left child of parent point to the new node
            parent->leftchild = newNode;
        // 6b: exit
        return;
    }
