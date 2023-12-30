#include<bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N, K;
		cin >> N >> K;
		string s;
		cin >> s;
		
		string ans(N, '.');
		int count = 0;
		
		int prevG = -K-1;
		int prevH = -K-1;
		for (int i = 0; i < N; i++) {
			if (s[i] == 'H') {
				if (i - prevH > K || prevH - i > K) {
					int location = min(i+K, N-1);
					if (ans[location] == 'G') {
						location--;
					}
					ans[location] = 'H';
					prevH = location;
					count++;
				}
			} else {
				if (i - prevG > K || prevG - i > K) {
					
					int location = min(i+K, N-1);
					if (ans[location] == 'H') {
						location--;
					}
					ans[location] = 'G';
					prevG = location;
					count++;
				}
			}
		}
		cout << count << endl;
		cout << ans << endl;
	}
}