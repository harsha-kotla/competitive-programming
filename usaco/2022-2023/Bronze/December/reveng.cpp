
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;
		int outputs[M];
		string inputs[M];


		for (int i = 0; i < M; i++) {
			cin >> inputs[i] >> outputs[i];

		}
		bool ok = false;
		
		for (int i = 0; i < N; i++) {
			int out0 = -1;
			int out1 = -1;
			int c0 = 0;
			int c1 = 0;
			for (int j = 0; j < M; j++) {
				
				if (inputs[j][i] == '0') {
					if (out0 == -1) {
						out0 = outputs[j];
						continue;
					}
					if (outputs[j] != out0 && out0 != -1) {
						c0 = 1;
					}
				}
				else if (inputs[j][i] == '1') {
					if (out1 == -1) {
						out1 = outputs[j];
						continue;
					}
					if (outputs[j] != out1 && out1 != -1) {
						c1 = 1;
					}
				}
				
			}
			//cout << c0 << " " << c1 << endl;
			if ((c0 == 0 && out0 != -1) || (c1 == 0 && out1 != -1)) {
				
				ok = true;
				break;
			}
			
		}
		if (ok) {
			cout << "OK" << endl;
		} else {
			cout << "LIE" << endl;
		}
	}
}
