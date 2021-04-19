#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int n,x,k;
        cin >> n >> x;
        set<long long int> a;
        for(long long int i = 0; i < n; i++) {
            cin >> k;
            a.insert(k);
        }
        long long int count = a.size() < (n - x) ? a.size() : (n - x);
        cout << count << endl;
    }
}