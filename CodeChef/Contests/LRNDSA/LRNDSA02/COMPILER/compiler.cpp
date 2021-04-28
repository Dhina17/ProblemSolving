#include<bits/stdc++.h>

#define ll long long int

using namespace std;

void solve() {
	 stack<char> st;
	 string s;
	 cin >> s;
	 ll count = 0;
	 ll max = 0, a = 0, b = 0, bp = 0;
	 for (ll i = 0; i < s.size(); i++) {
		 if (s[i] == '<') {
			 a++;
		 } else {
			 b++;
		 }
		 if (b >= a) {
			 bp = i;
		 }
	 }
	 for (ll i = 0; i <= bp; i++) {
		 if(s[i] == '<'){
			st.push(s[i]);
		 } else {
			if (!st.empty()) {
				st.pop();
				count += 2;
			} else {
				break;
			}
		 }
	 }
	 cout << count << endl;
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
