#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,r;
        cin >> n >> r;
        vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        ll rel = 0;
        ll count = b[0];
        ll max = count;
        ll x = 0;
        for(ll i = 1; i < n; i++) {
            rel = a[i] - a[i - 1];
            count = std::max(x , count - (rel * r));
            count +=  b[i];
            max = std::max(max, count);
        }
        cout << max << endl;
    }
}