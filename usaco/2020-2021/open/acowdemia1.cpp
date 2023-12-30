#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    int arr[n];
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+n);
    int ans = 0;

    for (int i = 0; i < n; i++) {
	if (i > 0) {
		if (arr[i] == arr[i-1]) {
			continue;
		}
	}
        int temp[n];
        for (int j = 0; j < n; j++) {
	       temp[j] = arr[j];

	}
	for (int j = i; j < min(i+l, n); j++) {
		temp[j] ++;
	}
	int count = 0;
	for (int j = i; j < n; j++) {
		if (temp[j] >= temp[i]) {
			count++;
		}
	}
        if (count <= temp[i]) {
               ans = max(ans, count);
               continue;
        }
        
    }
    cout << ans << endl;
}
