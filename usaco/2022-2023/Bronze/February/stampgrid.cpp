#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		char painting[n][n];

		bool paintingb[n][n];
		bool desiredp[n][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> painting[i][j];
				paintingb[i][j] = false;
				desiredp[i][j] = false;
				if (painting[i][j] == '*') {
					desiredp[i][j] = true;
				}
			}
		}
		int k;
		cin >> k;
		string stamp[k][k];
		for (int i = 0; i < k; i++) {
			for (int j = 0; j < k; j++) {
				cin >> stamp[i][j];
			}
		}
		
		for (int x = 0; x < n-k+1; x++) {
			for (int y = 0; y < n-k+1; y++) {
				for (int rot = 0; rot < 4; rot++) {
					
				}
			}
		}
		
	}
}
