#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

int main() {
    ifstream fin("diamond.in");
    ofstream fout("diamond.out");
    int n, k;
    fin >> n >> k;
    vector<int> sizes;
    for (int i = 0; i < n; i++) {
        int num;
        fin >> num;
        sizes.push_back(num);
    }
    int i = 0;
    int j = 0;
    sort(sizes.begin(), sizes.end());
    pii highest;
    while (i < n && j < n) {
        int diff = sizes[j]-sizes[i];
        if (diff <= k) {
            if (j-i > (highest.second-highest.first)) {
                highest.first = i;
                highest.second = j;
            }
            j++;
        } else {
            i++;
        }
    }
    pii no2;
    int p = 0;
    int q = 0;
    while (p < n && q < n) {
        if (p >= highest.first && p <= highest.second) {
            p = highest.second+1;
            continue;
        }
        if (q >= highest.first && q <= highest.second) {
            q = highest.second+1;
            continue;
        }

        int diff = sizes[q]-sizes[p];
        if (diff <= k) {
            if (q-p > (no2.second-no2.first)) {
                no2.first = p;
                no2.second = q;
            }
            q++;
        } else {
            p++;
        }
    }
  
    fout << highest.second-highest.first + no2.second-no2.first + 2<< endl;
}