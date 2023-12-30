#include<bits/stdc++.h>

using namespace std;

int main() {
    int k, n;
    cin >> k >> n;
    vector<string> cows;
    for (int i = 0; i < n; i++) {
        string c;
        cin >> c;
        cows.push_back(c);
    }
    vector<vector<string>> publications;
    for (int i = 0; i < k; i++) {
        vector<string> publication;
        for (int j = 0; j < n; j++) {
            string c;
            cin >> c;
            publication.push_back(c);
        }
        publications.push_back(publication);
    }
    
    char ans[n][n];

}