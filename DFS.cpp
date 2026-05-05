#include <iostream>
#include <stack>
using namespace std;

const int n = 5;
int adj[n][n];
bool visited[n];

void DFS(int start) {
    stack<int> st;
    st.push(start);

    while (!st.empty()) {
        int v = st.top();
        st.pop();

        if (!visited[v]) {
            cout << v << " ";
            visited[v] = true;

            for (int i = n - 1; i >= 0; i--) {
                if (adj[v][i] == 1 && !visited[i]) {
                    st.push(i);
                }
            }
        }
    }
}

int main() {
    cout << "Enter adjacency matrix:\n";

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> adj[i][j];

    for (int i = 0; i < n; i++)
        visited[i] = false;

    int start;
    cout << "Enter starting vertex: ";
    cin >> start;

    cout << "DFS Traversal: ";
    DFS(start);

    return 0;
}