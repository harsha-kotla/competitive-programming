#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int N, K;
    cin >> N >> K;
    ll d[N];

    ll total = 0LL;


    for (int i = 0; i < N; i++) {
        cin >> d[i];
        if (i == 0) {
            total += K+1LL;
        } else {
            ll newcost = K+1LL;
            ll extendcost = d[i]-d[i-1];
            total += min(extendcost, newcost);
        }
    }

	cout << total << endl;
}