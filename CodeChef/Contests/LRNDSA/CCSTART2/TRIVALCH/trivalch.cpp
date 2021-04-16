#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int a,b,c;
    cin >> a >> b >> c;
    bool val = (a + b) > c && 
            (b + c) > a &&
            (a + c) > b;
    if(val) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
