#include<bits/stdc++.h>

using namespace std;

int main() {
    ifstream fin("socdist2.in");
    ofstream fout("socdist2.out");
    int n;
    vector<int> sickcows;
    vector<int> healthycows;
    vector<int> cows;
    fin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        fin >> a >> b;
        if (b == 1) {
            sickcows.push_back(a);
        } else {
            healthycows.push_back(a);
        }
        cows.push_back(a);
    }
    sort(sickcows.begin(), sickcows.end());
    sort(healthycows.begin(), healthycows.end());
    vector<int> leastRs;
    for (int i = 0; i < size(healthycows); i++) {
        int val = 1e9;
        for (int j = 0; j < size(sickcows); j++) {
            val = min(val, abs(healthycows[i]-sickcows[j]));
        }
        leastRs.push_back(val);
    }
    sort(leastRs.begin(), leastRs.end());
    int r = leastRs[0];
    vector<int> diffs;
    sort(cows.begin(), cows.end());

    for (int i = 1; i < size(cows); i++) {
        diffs.push_back(cows[i]-cows[i-1]);
    }
    int ans = 0;
    for (int i = 0; i < size(diffs); i++) {
        //cout << diffs[i] << endl;
        if (diffs[i] >= r) {
            ans++;
        }
    }
    fout << ans << endl;
}