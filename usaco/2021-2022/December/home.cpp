#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    char grid[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    int ans = 0;
    if (k >= 1) {
        for (int i = 1; i < n-1; i++) {
            // i is the switch
            for (int j = 0; j < i; j++) {
                
            }
            for (int j = i; j < n; j++) {

            }
        }
    }
    if (k >= 2) {

    }
    if (k >= 3) {

    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}