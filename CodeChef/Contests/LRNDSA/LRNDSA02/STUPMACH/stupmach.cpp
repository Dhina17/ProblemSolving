#include<bits/stdc++.h>

#define ll long long int

using namespace std;

ll findIdx(ll arr[], ll n) {
	ll min = 0;
	for (ll i = 0; i < n; i++) {
		if (min == arr[i]) {
			return i;
		}
	}
	return n;
}

bool putToken(ll arr[], ll n) {
	for (ll i = 0; i < n; i++) {
		(arr[i])--;
		if (arr[0] == 0) {
			return false;
		}
	}
	return true;
}

void solve() {
	ll n;
	cin >> n;
	ll s[n];
	for (ll i = 0; i < n; i++) cin >> s[i];
	ll pmc = 0;
	// My solution - TLE for sub task 2
	/*while (putToken(s, l)) {
		l = findIdx(s, l);
		sum += l;
	} */
	// My solution, After seeing the hint
	ll min = s[0];
	pmc += min;
	for (ll i = 1; i < n; i++) {
		if (s[i] < min) {
		    min = s[i];
		}
		pmc += min;		
	}
	cout << pmc << endl;
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
