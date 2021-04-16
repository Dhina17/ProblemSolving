#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,i;
    cin >> n;
    vector<int> factors;
    for(i = 1; i <= n/2; i++) {
        if(n % i == 0) factors.push_back(i);
    }
    factors.push_back(n);
    cout << factors.size() << endl;
    for(long long int x : factors) cout << x << " ";
    cout << endl;
}

