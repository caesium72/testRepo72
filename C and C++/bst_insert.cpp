#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *root = NULL;

void BST_insert(int val)
{
    node *temp = new node();
    node *curr_node = new node();
    node *prev_node = new node();
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
     
    {
        curr_node = root;
        prev_node = root;
    }
    while (curr_node != NULL)
    {
        prev_node = curr_node;
        if (curr_node->data < val)
        {
            curr_node = curr_node->right;
        }
        else
        {
            curr_node = curr_node->left;
        }
    }
    if (prev_node->data < val)
    {
        prev_node->right = temp;
    }
    else
    {
        prev_node->left = temp;
    }
}

// Function to print the binary tree structure
void printTree(node *root, int space = 0)
{
    const int spacing = 5; // Adjust the spacing for better visualization
    if (root == NULL)
        return;

    space += spacing;

    printTree(root->right, space);

    cout << endl;
    for (int i = spacing; i < space; i++)
        cout << " ";
    cout << root->data << "\n";

    printTree(root->left, space);
}

int main()
{
    int x;

    for (int i = 0; i < 11; i++)
    {
        cin >> x;
        BST_insert(x);
    }

    // Display the binary tree structure
    cout << "Binary Tree Structure:\n";
    printTree(root);

    return 0;
}
