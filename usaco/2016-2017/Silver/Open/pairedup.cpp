#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

int main() {
    ifstream fin("pairup.in");
    ofstream fout("pairup.out");
    int n;
    vector<pii> cows;
    fin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        fin >> x >> y;
        cows.push_back({y, x});
    }
    sort(cows.begin(), cows.end());
    int left = 0;
    int right = n-1;
    int ans = 0;
    while (left <= right) {
        int z = min(cows[left].second, cows[right].second);
        if (left == right) z /= 2;
        ans = max(ans, cows[left].first + cows[right].first);
        cows[left].second-=z;
        cows[right].second-=z;

        if (cows[left].second == 0) {
            left++;
        } 
        if (cows[right].second == 0) {
            right--;
        }
    }
    fout << ans << endl;
    return 0;
}