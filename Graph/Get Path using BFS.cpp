// Problem - https://www.naukri.com/code360/problems/get-path-bfs_2041962?interviewProblemRedirection=true&search=bfs&leftPanelTabValue=PROBLEM&count=25&page=1&sort_entity=order&sort_order=ASC&customSource=studio_nav



// --------------------Solution--------------------------
#include <bits/stdc++.h> 
vector<int> getPath(int V, int E, vector<int> a, vector<int> b, int v1, int v2) {
    vector<vector<int>> adj(V);

    vector<bool> visited(V, false);
    vector<int> parent(V, -1);
    

    // Create Adjacnecy List
    for(int i = 0; i < E; i++) {
        adj[a[i]].push_back(b[i]);
        adj[b[i]].push_back(a[i]);
    }

    queue<int> que;
    que.push(v1);
    visited[v1] = true;

    while(!que.empty()) {
        int node = que.front();
        que.pop();

        if(node == v2) break;

        for(int nieghbour : adj[node]) {
            if(!visited[nieghbour]) {
                visited[nieghbour] = true;
                parent[nieghbour] = node;
                que.push(nieghbour);
            }
        }
    }
    
    vector<int> path; // To store path

    if(visited[v2] != true) return path;

    int curr = v2;
    while(curr != -1) {
        path.push_back(curr);
        curr = parent[curr];
    }

    return path;

}
