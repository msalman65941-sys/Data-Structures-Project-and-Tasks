#include <iostream>
using namespace std;

// ==================================================
// MODULE 1: BST NODE STRUCTURE
// ==================================================

struct BSTNode
{
    int data;
    BSTNode* left;
    BSTNode* right;
};


// ==================================================
// MODULE 2: FIND MINIMUM NODE
// ==================================================

BSTNode* FindMin(BSTNode* root)
{
    // Find the smallest value in the subtree
    while (root->left != NULL)
    {
        root = root->left;
    }

    return root;
}


// ==================================================
// MODULE 3: DELETE NODE FROM BST
// ==================================================

BSTNode* Delete(BSTNode* root, int data)
{
    // ----------------------------------------------
    // CASE 1: Tree is empty or node not found
    // ----------------------------------------------
    if (root == NULL)
    {
        return root;
    }

    // Search in left subtree
    else if (data < root->data)
    {
        root->left = Delete(root->left, data);
    }

    // Search in right subtree
    else if (data > root->data)
    {
        root->right = Delete(root->right, data);
    }

    // Node found
    else
    {
        // ------------------------------------------
        // CASE 2: Node has NO CHILD (Leaf Node)
        // ------------------------------------------
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // ------------------------------------------
        // CASE 3: Node has ONLY RIGHT CHILD
        // ------------------------------------------
        else if (root->left == NULL)
        {
            BSTNode* temp = root->right;
            delete root;
            return temp;
        }

        // ------------------------------------------
        // CASE 4: Node has ONLY LEFT CHILD
        // ------------------------------------------
        else if (root->right == NULL)
        {
            BSTNode* temp = root->left;
            delete root;
            return temp;
        }

        // ------------------------------------------
        // CASE 5: Node has TWO CHILDREN
        // ------------------------------------------
        else
        {
            // Find minimum node in right subtree
            BSTNode* temp = FindMin(root->right);

            // Replace current node data
            root->data = temp->data;

            // Delete the duplicate successor node
            root->right = Delete(root->right, temp->data);
        }
    }

    return root;
}


// ==================================================
// MODULE 4: INSERT NODE INTO BST
// ==================================================

BSTNode* Insert(BSTNode* root, int data)
{
    // CASE 1: Tree is empty, create a new node
    if (root == NULL)
    {
        BSTNode* newNode = new BSTNode;

        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;

        return newNode;
    }

    // CASE 2: Insert into left subtree
    if (data < root->data)
    {
        root->left = Insert(root->left, data);
    }

    // CASE 3: Insert into right subtree
    else if (data > root->data)
    {
        root->right = Insert(root->right, data);
    }

    return root;
}


// ==================================================
// MODULE 5: INORDER TRAVERSAL
// ==================================================

void Inorder(BSTNode* root)
{
    if (root != NULL)
    {
        // STEP 1: Visit Left
        Inorder(root->left);

        // STEP 2: Print Root
        cout << root->data << " ";

        // STEP 3: Visit Right
        Inorder(root->right);
    }
}


// ==================================================
// MODULE 6: MAIN FUNCTION
// ==================================================

int main()
{
    // STEP 1: Initialize empty BST
    BSTNode* root = NULL;

    // STEP 2: Insert nodes
    root = Insert(root, 60);
    root = Insert(root, 45);
    root = Insert(root, 80);
    root = Insert(root, 35);
    root = Insert(root, 50);
    root = Insert(root, 70);
    root = Insert(root, 95);

    // STEP 3: Display original BST
    cout << "Original BST: ";
    Inorder(root);

    // STEP 4: Delete node 70
    // CASE 5 applies because 70 has two children
    root = Delete(root, 70);

    // STEP 5: Display updated BST
    cout << "\nAfter deleting 70: ";
    Inorder(root);

    return 0;
}