#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int Am, Bm, Cm, Tm, a, b, c;
        cin >> Am >> Bm >> Cm >> Tm >> a >> b >> c;
        bool pass = false;
        if ( a >= Am && b >= Bm && c >= Cm) {
            if (a + b + c >= Tm) {
                pass = true;
            }
        }
        if (pass) {
            puts("YES");
        } else {
            puts("NO");
        }
    }
}