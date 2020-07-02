#include <bits/stdc++.h>

using namespace std;
	
const int maxN = 1000001;

vector<int> G[maxN];
bool visited[maxN];

void dfs(int u) {
	visited[u] = true;
	cout << u << " ";
	for (int child: G[u]) {
		if (!visited[child])
			dfs(child);
	}
}

int main() {
	int vertices, edges;
	cin >> vertices >> edges;

	
	for (int i = 0; i < edges; i++) {
		int a, b;
		cin >> a >> b;

		// Since it is an undirected graph, so we will update adjacency list of both nodes
		G[a].push_back(b);
		G[b].push_back(a);
			
	}

	cout << "DFS Traversal: ";
	dfs(1); // We will start the traversal from 1st node since the graph is 1-based
	cout << endl;
	return 0;
}

// Time complexity: O(V + E), where V is the number of vertices and E is the number of edges in the graph.
// Space Complexity: O(V). Since, an extra visited array is needed of size V.