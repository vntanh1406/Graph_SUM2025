#include <bits/stdc++.h>
using namespace std;

/*
Cho đồ thị vô hướng general graph G=<V,E> biểu diễn dưới dạng ma trận kề.
a[i][j] = số cạnh giữa i và j.
Chuyển sang danh sách cạnh in ra u v k với u<v
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "--Print directly--\n";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][j] > 0) {
                cout << i + 1 << " " << j + 1 << " " << a[i][j] << "\n";
            }
        }
    }

    cout << "--Use the vector Edge--\n";
    vector<tuple<int, int, int>> edges; // (u, v, k)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][j] > 0) {
                edges.emplace_back(i + 1, j + 1, a[i][j]);
            }
        }
    }
    for (auto &[u, v, k] : edges) {
        cout << u << " " << v << " " << k << "\n";
    }

    return 0;
}
