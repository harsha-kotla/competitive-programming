#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n, q;
    cin >> n >> q;
    int a[n];
    int x[q];
    for (int j = 0; j < n; j++) {
      cin >> a[j];
    }
    for (int j = 0; j < q; j++) {
      cin >> x[j];
    }
    
    for (int k = 0; k < q; k++) {
      // queries
      for (int r = 0; r < n; r++) {
        if (fmod(a[r], pow(2, x[k])) == 0.0) {
          a[r] += pow(2, x[k] - 1);
        }
      }
    }
    for (int j = 0; j < n; j++) {
      cout << a[j] << " ";
    }
    cout << endl;
  }
}