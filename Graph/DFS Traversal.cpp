// Problem - https://www.naukri.com/code360/problems/dfs-traversal_630462?interviewProblemRedirection=true&search=DFS&leftPanelTabValue=PROBLEM



// ---------------------Solution------------------------
void DFS(int node, vector<vector<int>> &adj, vector<bool>& visited, vector<int>& component) {
    visited[node] = true;
    component.push_back(node);

    for(int neighbour : adj[node]) {
        if(!visited[neighbour]) {
            DFS(neighbour, adj, visited, component);
        }
    }
}


vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    vector<vector<int>> adj(V);

    // Create Adjacency List
    for(int i = 0; i < E; i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(V, false);
    vector<vector<int>> ans;

    for(int i = 0; i < V; i++) {
        if(!visited[i]) {

            vector<int> component;

            DFS(i, adj, visited, component);

            sort(component.begin(), component.end());

            ans.push_back(component);
        }
    }

    return ans;

}
