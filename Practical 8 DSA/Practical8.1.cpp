#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node*left;
    Node*right;
};

void preorder(Node* root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node*root=new Node{1,NULL,NULL};
    root->left=new Node{2,NULL,NULL};
    root->right=new Node{3,NULL,NULL};

    cout<<"Preorder:";
    preorder(root);
    return 0;
}
