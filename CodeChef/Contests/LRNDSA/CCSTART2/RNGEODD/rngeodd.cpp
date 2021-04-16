#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll l,r;
    cin >> l >> r;
    for(ll i = l; i <= r; i++) {
        if(i % 2 != 0) {
            cout << i << " ";
        }
    }
}
