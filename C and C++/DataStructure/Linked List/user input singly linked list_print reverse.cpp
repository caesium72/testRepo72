#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *root = NULL;

void printing(node *curr_node)
{
    if (curr_node == NULL){
        return;
    }
    printing(curr_node->next);
    cout << curr_node->data << " ";
}

int main()
{
    int num;
    cout << "How many values do you insert in the list : ";
    cin >> num;

    node *p = new node[num]; // Allocate memory for all nodes

    // Initialize root to point to the first node
    root = &p[0];

    cout << "Enter " << num << " values :";

    node *temp = root; // To traverse the list

    for (int i = 0; i < num; i++)
    {
        cin >> temp->data;

        if (i == (num - 1))
        {
            temp->next = NULL;
        }
        else
        {
            temp->next = &p[i + 1]; // Link to the next allocated node
            temp = temp->next;
        }
    }

    printing(root);

    // Don't forget to release the allocated memory
    delete[] p;

    return 0;
}

