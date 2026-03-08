// Problem - https://www.naukri.com/code360/problems/bfs-in-graph_973002?interviewProblemRedirection=true&search=bfs%20&leftPanelTabValue=PROBLEM



// --------------------Solution ---> BFS-------------------------
void BFS(int start, vector<vector<int>>& adj, vector<int>& visited, vector<int>& ans) {
    queue<int> que;

    que.push(start);
    visited[start] = true;

    while(!que.empty()) {
        int node = que.front();
        que.pop();

        ans.push_back(node);

        for(int neighbour : adj[node]) {
            if(!visited[neighbour]) {
                visited[neighbour] = true;
                que.push(neighbour);
            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    vector<int> ans;
    vector<int> visited(n, false);

    BFS(0, adj, visited, ans);

    return ans;
}
