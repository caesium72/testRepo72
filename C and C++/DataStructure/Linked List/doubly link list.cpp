#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

node *root = NULL;

void printing()
{
    node *curr_node = root;

    do
    {
        cout << curr_node->data << " ";
        curr_node = curr_node->next;
    }
    while(curr_node != NULL);
}


int main()
{
    int num;
    cout << "How many values do you insert in the list : ";
    cin >> num;

    node *p = new node[num];  // Allocate memory for all nodes

    // Initialize root to point to the first node
    root = &p[0];

    cout << "Enter " << num << " values :";

    node *temp = root; // To traverse the list

    for(int i = 0; i < num; i++)
    {
        cin >> temp->data;

        if (i == 0)
        {
            temp->prev = NULL;
        }
        else
        {
            temp->prev = &p[i - 1];  // Set prev pointer
        }


        if(i == (num-1))
        {
            temp->next = NULL;
        }
        else
        {
            temp->next = &p[i + 1];  // Link to the next allocated node
            temp = temp->next;
        }
    }

    // Print the doubly linked list
    printing();

    // Don't forget to release the allocated memory
    delete[] p;

    return 0;
}
