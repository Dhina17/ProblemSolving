#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,s,p,v;
        cin >> n;
        int max = 0;
        for (int i = 0; i < n; i++) {
            cin >> s >> p >> v;
            int ch = p / (s + 1);
            if (ch * v > max) {
                max = ch * v;
            }
        }
        cout << max << endl;
    }
}
