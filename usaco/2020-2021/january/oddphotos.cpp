#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int n;
    cin >> n;
    int e = 0, o = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num % 2 == 0) e++;
        else o++;
    }
    while (o > e) {
        o -= 2;
        e++;
    }
    if (e > o+1) {
        e = o+1;
        
        
    }
    cout << e + o << endl;
}