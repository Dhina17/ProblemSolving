#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> exp(n);
	stack<int> st;
	int dep = 0, count = 0, idx, flag = 0, max = 0, idxm;
	//for (int i = 0; i < n; i++) 
	for (int i = 0; i < n; i++) {
		cin >> exp[i];
		if (exp[i] == 1) {
			if (st.empty()) flag = 0;
			st.push(1);
			flag++;
			if (st.size() > dep) {
				dep = st.size();
				idx = i;
			}
		} else {
			st.pop();
			flag++;
			if (flag > max) {
				idxm = i;
				max = flag;
			}
		}
	}
	cout << dep << " " << idx + 1 << " " << 
			max << " " << idxm + 2 - max << endl;
}

int main() {

    //for faster input
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	// test case
	int t = 1;
	//cin >> t;
	
	while (t--) {
		solve();
	}
}
