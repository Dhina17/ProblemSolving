#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    bool val = (a + b) > c && 
            (b + c) > a &&
            (a + c) > b;
    
    int ans = -1;
    if (val) {
        if (a == b && b == c && a == c) {
            ans = 1;
        } else if (a == b || b == c || a == c) {
            ans = 2;
        } else {
            ans = 3;
        }
    }
    cout << ans << endl;
}
