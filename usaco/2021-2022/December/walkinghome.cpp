#include<bits/stdc++.h>

using namespace std;

vector<string> generateCombinations(int n, int dCount, int rCount, string current = "") {
    // Base case: if the current combination has reached the desired length
    if (dCount == n && rCount == n) {
        return {current};
    }

    vector<string> combinations;

    // Recursive case: add 'D' and 'R' to the current combination
    if (dCount < n) {
        vector<string> dCombinations = generateCombinations(n, dCount + 1, rCount, current + 'D');
        combinations.insert(combinations.end(), dCombinations.begin(), dCombinations.end());
    }

    if (rCount < n) {
        vector<string> rCombinations = generateCombinations(n, dCount, rCount + 1, current + 'R');
        combinations.insert(combinations.end(), rCombinations.begin(), rCombinations.end());
    }

    return combinations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        char grid[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }
        int ans = 0;
        vector<string> result = generateCombinations(n-1, 0, 0);
        for (const string& comb: result) {
            //cout << comb<<endl;
            int currx = 0;
            int curry = 0;
            int changes = 0;
            bool haybale = false;
            for (int j = 0; j < 2*(n-1); j++) {
                if (comb[j] == 'D') {
                    curry += 1;
                } else {
                    currx += 1;
                }
                if (grid[currx][curry] == 'H') {
                    haybale = true;
                    break;
                }
                if (j > 0) {
                    if (comb[j-1] != comb[j]) {
                        changes += 1;
                    }
                }
            }
            //cout << changes << endl;
            if (changes > k) {
                continue;
            }
            if (haybale == true) {
                continue;
            }
            ans += 1;

        }
        cout << ans << endl;
    }
    
}