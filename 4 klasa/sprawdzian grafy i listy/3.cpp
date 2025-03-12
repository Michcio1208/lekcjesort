#include <iostream>
#include <fstream>
#include <vector>
#include <stack>

using namespace std;

void dfs(int start, vector<vector<int>>& adj, vector<bool>& visited) {
    stack<int> s;
    s.push(start);
    visited[start] = true;

    while (!s.empty()) {
        int v = s.top();
        s.pop();
        for (int u : adj[v]) {
            if (!visited[u]) {
                visited[u] = true;
                s.push(u);
            }
        }
    }
}

int main() {
    ifstream file("graph-2-txt.txt");
    if (!file) {
        cerr << "Nie można otworzyć pliku!" << endl;
        return 1;
    }

    int vertices, edges;
    file >> vertices >> edges;

    vector<vector<int>> adj(vertices);
    for (int i = 0; i < edges; i++) {
        int from, to;
        file >> from >> to;
        adj[from].push_back(to);
    }

    file.close();

    int start;
    cout << "Podaj numer wierzcholka poczatkowego: ";
    cin >> start;
    
    if (start < 0 || start >= vertices) {
        cerr << "Nieprawidlowy numer wierzcholka!" << endl;
        return 1;
    }

    vector<bool> visited(vertices, false);
    dfs(start, adj, visited);

    bool reachable = true;
    for (int i = 0; i < vertices; i++) {
        if (!visited[i]) {
            cout << "Nie mozna dotrzec do wierzcholka " << i << " z wierzcholka " << start << endl;
            reachable = false;
        }
    }

    if (reachable) {
        cout << "Mozna dotrzec do wszystkich wierzcholkow z " << start << endl;
    }

    return 0;
}
