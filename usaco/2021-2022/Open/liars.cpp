#include<bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
   
    vector<int> nums;
    vector<char> op;
    for (int i = 0; i < N; i++) {
        char o;
        int num;
        cin >> o >> num;
        
        nums.push_back(num);
        op.push_back(o);
    }
    int ans = 1e9;
    for (int i = 0; i < N; i++) {
        int count = 0;
        int curr = nums[i];
        for (int j = 0; j < N; j++) {
            if (op[j] == 'L' && nums[j] < curr) {
                count++;
            } else if (op[j] == 'G' && nums[j] > curr) {
                count++;
            } 
        }
        ans = min(ans, count);
    }
    cout << ans << endl;
}