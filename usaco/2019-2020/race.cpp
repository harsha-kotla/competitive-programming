#include<bits/stdc++.h>

using namespace std;

int main() {
    ifstream fin("race.in");
    ofstream fout("race.out");
    int K, N;
    fin >> K >> N;
    while (N--) {
        int x;
        fin >> x;
        int time = 0;
        int dist = 0;
        for (int i = 1; i < 1e9; i++) {
            dist += i;
            time++;
            if (dist >= K) {
                break;
            }
            if (i >= x) {
                dist += i;
                time++;
                if (dist >= K) break;
            }
        }
        fout << time << endl;
    }
}