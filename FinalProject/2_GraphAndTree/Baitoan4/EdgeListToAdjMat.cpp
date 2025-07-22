#include <bits/stdc++.h>
using namespace std;

/*
Cho đồ thị vô hướng G=<V,E> được biểu diễn dưới dạng danh sách cạnh có trọng số k.
Chuyển đổi sang ma trận kề adj[i][j] = tổng trọng số các cạnh nối i-j.
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1, vector<int>(n + 1, 0));

    for (int i = 0; i < m; i++) {
        int u, v, k;
        cin >> u >> v >> k;
        adj[u][v] += k;
        adj[v][u] += k; // đồ thị vô hướng
    }

    // In ma trận kề
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }
}
