#include <bits/stdc++.h>
using namespace std;

/*
Cho đồ thị vô hướng G=<V,E> được biểu diễn dưới dạng danh sách cạnh có trọng số k.
Chuyển đổi biểu diễn đồ thị dưới dạng danh sách kề (vector<pair<int,int>>)
*/

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m, u, v, k;
    cin >> n >> m;
    vector<pair<int,int>> adj[n+1]; //mỗi phần tử là (đỉnh kề, trọng số)
    for (int i = 0; i < m; i++) {
        cin >> u >> v >> k;
        adj[u].emplace_back(v, k);
        adj[v].emplace_back(u, k); //đồ thị vô hướng
    }
    for (int i = 1; i <= n; i++) {
        cout << i << " : ";
        for (auto& edge : adj[i]) {
            cout << "(" << edge.first << "," << edge.second << ") ";
        }
        cout << '\n';
    }
}
