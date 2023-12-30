#include<bits/stdc++.h>

using namespace std;

int main() {
	ifstream fin("socdist1.in");
	ofstream fout("socdist1.out");
	int n;
	fin >> n;
	string s;
	fin >> s;
	vector<int> zeroBatches;
	int vecsize = 0;
	int temp = 0;
	for (int i = 0; i < n; i++) {
        if (i == n-1) {
            if (temp > 0 && s[n-1] == '0') {
                zeroBatches.push_back(temp+1);
                vecsize++;
            }
        }
		if (s[i] == '0') {
			temp++;
		} else {
			if (temp > 0) {
				zeroBatches.push_back(temp);
				vecsize++;
				temp = 0;
			}
		}

	}
	int ans = 0;
	sort(zeroBatches.begin(), zeroBatches.end());
	if (vecsize == 1){
		ans = (zeroBatches[0]-2)/3 + 1;
	} else if (vecsize == 2) {
		int max1 = zeroBatches[vecsize-1];
		int max2 = zeroBatches[vecsize-2];
		int othercase;
		if (max2 % 2 == 0) {
			othercase = max2/2;
		} else {
			othercase = (max2+1)/2;
		}
		ans = max((max1-2)/3 + 1, othercase);
	} else {
		int max1 = zeroBatches[vecsize-1];
		int max2 = zeroBatches[vecsize-2];
		int othercase;
		if (max2 % 2 == 0) {
			othercase = max2/2;
		} else {
			othercase = (max2+1)/2;
		}
		ans = max((max1-2)/3 + 1, othercase);
	}
	fout << ans << endl;
	
}