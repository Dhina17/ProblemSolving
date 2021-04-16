#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if ( a == 0 || b == 0 || c == 0) {
        cout << "NO" << endl;
    } else {
        if (a + b + c == 180) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
}
