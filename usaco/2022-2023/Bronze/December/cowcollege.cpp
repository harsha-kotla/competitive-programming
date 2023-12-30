#include<bits/stdc++.h>

using namespace std;

int main() {
	long long N;
	cin >> N;
	long long c[N];
	for (int i = 0; i < N; i++) {
		cin >> c[i];
	}
	sort(c, c+N);
	long long tuition = 0LL;
	long long total = 0LL;
	for (long long i = 0; i < N; i++){
		if ((N-i)*c[i] > total) {
		    tuition = c[i];
		    total = (N-i)*c[i];
		} 
	}
	cout << total << " " << tuition << endl;
}