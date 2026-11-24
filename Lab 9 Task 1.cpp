#include <iostream>
using namespace std;

int main()
{
    // Module 1: Declare variables and arrays
    int n, e;
    int graph[10][10] = { 0 };
    int visited[10] = { 0 };

    // Module 2: Input vertices and edges
    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> e;

    // Module 3: Create graph
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cout << "Enter edge (u v): ";
        cin >> u >> v;

        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    // Module 4: Input starting vertex and choice
    int start, choice;

    cout << "Enter starting vertex: ";
    cin >> start;

    cout << "\n1. BFS Traversal";
    cout << "\n2. DFS Traversal";
    cout << "\nEnter choice: ";
    cin >> choice;

    // Module 5: BFS Traversal
    if (choice == 1)
    {
        int q[10];
        int front = 0, rear = 0;

        // Insert starting vertex into Queue
        visited[start] = 1;
        q[rear] = start;
        rear++;

        cout << "BFS Traversal: ";

        // Repeat until Queue becomes empty
        while (front < rear)
        {
            // Remove vertex from Queue
            int current = q[front];
            front++;

            // Display vertex
            cout << current << " ";

            // Check adjacent vertices
            for (int i = 0; i < n; i++)
            {
                if (graph[current][i] == 1 &&
                    visited[i] == 0)
                {
                    // Mark as visited
                    visited[i] = 1;

                    // Insert into Queue
                    q[rear] = i;
                    rear++;
                }
            }
        }
    }

    // Module 6: DFS Traversal
    else if (choice == 2)
    {
        int s[10];
        int top = -1;

        // Push starting vertex into Stack
        s[++top] = start;

        cout << "DFS Traversal: ";

        // Repeat until Stack becomes empty
        while (top != -1)
        {
            // Pop vertex from Stack
            int current = s[top];
            top--;

            // Check if vertex is unvisited
            if (visited[current] == 0)
            {
                // Mark as visited
                visited[current] = 1;

                // Display vertex
                cout << current << " ";

                // Check adjacent vertices
                for (int i = n - 1; i >= 0; i--)
                {
                    if (graph[current][i] == 1 &&
                        visited[i] == 0)
                    {
                        // Push into Stack
                        s[++top] = i;
                    }
                }
            }
        }
    }

    // Module 7: Invalid choice
    else
    {
        cout << "Invalid Choice!";
    }

    // Module 8: End program
    return 0;
}