#include<bits/stdc++.h>

using namespace std;

// Got bored and so copied concepts from geeksforgeeks but anyways learnt it.

int getPreced(char op) {
	switch(op) {
		case '^':
		   	return 3;
		case '/':
		   	return 2;
		case '*':
			return 2;
		case '+':
			return 1;
		case '-':
			return 1;
		default:
			return -1;
	}
}

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	string postp = "";
	stack<char> st;
	for (int i = 0; i < n; i++) {
		if (s[i] <= 'Z' && s[i] >= 'A') {
			postp += s[i];
		}else if (s[i] == '(') {
			st.push(s[i]);
		}else if (s[i] == ')') {
			while (!st.empty() && st.top() != '(') {
				postp += st.top();
				st.pop();
			}
			st.pop();
		} else {
			while (!st.empty() && getPreced(s[i]) <= getPreced(st.top())) {
				postp += st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while (!st.empty()) {
		postp += st.top();
		st.pop();
	}
	cout << postp << endl;
}

int main() {

    //for faster input
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	// test case
	int t;
	cin >> t;
	
	while (t--) {
		solve();
	}
}
