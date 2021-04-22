#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        int a = 0, b = 0;
        cin >> s;
        int max = 0,min = 0,last,rem, sa = n, sb = n;
        bool found = false;

        for (int i = 1; i <= 2 * n; i++) {
            last = i & 1;
            if (last) {
                sa--;
            } else {
                sb--;
            }

            if (s[i - 1] == '1') {
                int r = last ? ++a : ++b;
                min = std::min(a, b);
                max = std::max(r, max); 
            }

            rem = max == a ? sb : sa;
            if (max > rem + min) {
                cout << i << endl;
                found = true;
                break;
            }
        }

        if (!found) cout << 2 * n << endl;
    }
}
