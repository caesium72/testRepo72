#include <bits/stdc++.h>
using namespace std;

vector<int> Node_vec[100];

int main()
{
    int node_no, edge_no;
    printf("Enter the number of nodes: ");
    scanf("%d", &node_no);

    printf("Enter the number of edges: ");
    scanf("%d", &edge_no);

    for (int i = 1; i <= edge_no; i++)
    {
        int nodeA, nodeB;
        scanf("%d %d", &nodeA, &nodeB);
        Node_vec[nodeA].push_back(nodeB);
        Node_vec[nodeB].push_back(nodeA);  // Assuming the graph is undirected
    }

    for (int i = 1; i <= node_no; i++)
    {
        printf("%d -> ", i);
        for (int j = 0; j < Node_vec[i].size(); j++)
        {
            printf("%d ", Node_vec[i][j]);
        }
        printf("\n");
    }

    return 0;
}
