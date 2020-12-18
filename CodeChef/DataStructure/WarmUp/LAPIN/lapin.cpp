#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        string S;
        cin >> S;
        string s1 = S.substr(0,S.size()/2);
        string s2 = (S.size() % 2 == 0) ? S.substr(s1.size(), S.size()) : S.substr(s1.size() + 1, S.size());
        
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if(s1.compare(s2)){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
}