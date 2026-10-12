#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node*left;
    Node*right;
};

Node*insert(Node* root, int x)
{
    if(root==NULL)
    {
        Node* n = new Node{x, NULL, NULL};
        return n;
    }

    if (x < root->data)
        root->left = insert(root->left, x);
    else
        root->right = insert(root->right, x);

    return root;
}

void inorder(Node* root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    Node* root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);

    cout << "Inorder: ";
    inorder(root);

    return 0;
}
