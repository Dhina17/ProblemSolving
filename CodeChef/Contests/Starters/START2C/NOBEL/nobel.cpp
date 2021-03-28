#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n];
        unordered_set<int> s;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s.insert(a[i]);   
        }
        
        if(s.size() < m){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}