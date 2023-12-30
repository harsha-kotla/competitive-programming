#include <bits/stdc++.h>

using namespace std;

int main() {
	int N;
	cin >> N;
	string s;
	cin >> s;
	int E[N];
	int minG = -1;
	int maxG = -1;
	int minH = -1;
	int maxH = -1;
	for (int i = 0; i < N; i++) {
		cin >> E[i];
		if (minG == -1 && s[i] == 'G') {
			minG = i;
		}
		if (s[i] == 'G') {
			maxG = i;
		}
		if (minH == -1 && s[i] == 'H') {
			minH = i;
		}
		if (s[i] == 'H') {
			maxH = i;
		}
		
	}
	int total = 0;
	for (int i = 0; i < N; i++) {
		bool containsall = false;
		bool containsotherbreed = false;
		if (s[i] == 'G') {
			if (i == minG && E[i] >= maxG+1) {
				containsall = true;

			}
			if (containsall == false) {
				for (int j = i; j < E[i]; j++) {
					if (s[j] == 'H' && j == minH && E[j] >= maxH+1) {
						total++;
					}
				}
			} else {
				for (int j = 0; j < N; j++) {
					if (s[j] == 'H' && j == minH && E[j] >= maxH+1) {
						total++;
					} else if (s[j] == 'H') {
						if (j < i && E[j]-1 >= i) {
							total++;
						}
					}
				}
			}
		} else {

		}
	}
	cout << total << endl;
} 
