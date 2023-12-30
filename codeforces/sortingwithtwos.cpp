#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int arr[n];
    for (int j = 0; j < n; ++j) {
      cin >> arr[j];
    }
    int powers[n];
    for (int j = 0; j < n; j++) {
      powers[j] = pow(2, j);
    }
    int ans = 1;
    for (int j = 1; j < n ; j++) {
      if (arr[j] < arr[j - 1]) {
        int none = 0;
        for (int r = 0; r < n; r++) {
          if (powers[r] == j) {
            none = 1;
          }
        }
        if (none == 0) {
          ans = 0;
          break;
        }
      }
    }
    if (ans == 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
