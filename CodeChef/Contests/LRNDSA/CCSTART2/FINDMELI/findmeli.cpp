#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main(){
    ll n,k,x;
    cin >> n >> k;
    int ans = -1;
    for(ll i = 0; i < n; i++) {
        cin >> x;
        if(x == k){
            ans = 1;
        }
    }
    cout << ans << endl;
}
