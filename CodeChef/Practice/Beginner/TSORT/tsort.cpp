#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int n[t];
    for(int i = 0; i<t; i++){
        cin >> n[i];
    }
    sort(n, n+t);
    for(int i = 0; i < t; i++){
        cout << n[i] << endl;
    }
}