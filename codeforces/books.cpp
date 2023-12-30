#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }
    int left = 0, right = 0;
    int ans = 0;
    int currsum = 0;
    for (int i = 0; i < n; i++) {
        if (left == right) {
            currsum = a[i];
        }
        if (i < n-1) {
            if (a[i+1] + currsum > t) {
                ans = max(right-left, ans);
            }
            left = right;
        } else {
            ans = max(ans, right-left);
        }
    }
    cout << ans << endl;
}