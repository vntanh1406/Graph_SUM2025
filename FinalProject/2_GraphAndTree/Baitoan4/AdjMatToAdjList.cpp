#include <bits/stdc++.h>
using namespace std;

/*
Cho đồ thị general (multi-)graph có hướng G=<V,E> được biểu diễn dưới dạng ma trận kề.
adj[i][j] = số cạnh từ i tới j (có thể = 0 nếu không có cạnh).
Chuyển đổi sang biểu diễn danh sách kề:
Mỗi đỉnh sẽ có một vector<pair<int,int>>, trong đó pair = {đỉnh_kề, số_cạnh}.
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin>>a[i][j];

    //danh sách kề dạng vector<pair<đỉnh_kề, số_cạnh>>
    vector<vector<pair<int,int>>> adj(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int k = a[i][j];
            if (k > 0) {
                adj[i].push_back({j, k});
            }
        }
    }

    //in ra danh sách kề
    for (int i=0; i<n; i++) {
        cout<<(i+1) << " : ";
        for (auto &p : adj[i]) {
            cout<<"("<<(p.first + 1) << "," << p.second << ") ";
        }
        cout << "\n";
    }
    return 0;
}
