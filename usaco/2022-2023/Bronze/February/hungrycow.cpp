#include<bits/stdc++.h>

using namespace std;

int main() {
	long long n, t;
	cin >> n >> t;
	long long d[n];
	long long b[n];
	for (int i = 0; i < n; i++) {
		cin >> d[i] >> b[i];
	}
	
	long long total = 0LL;
	long long eaten = 0LL;
	for (int i = 0; i < n; i++) {
		total += b[i];
		long long amount = 0LL;
		if (i == n-1 && t >= d[n-1]) {
			eaten += min(total, t-d[i]+1);
			break;
		}
		
		if (t < d[i+1]) {
			amount += t-d[i];
		} else {
			amount += min(total, d[i+1]-d[i]);
		}
		eaten += amount;
		total -= amount;

	}
	cout << eaten << endl;
}