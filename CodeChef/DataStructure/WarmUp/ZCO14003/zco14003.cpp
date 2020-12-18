#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long int N,i,R=0,S=0;
    cin >> N;
    unsigned long long int P[N];
    for(i = 0; i < N; i++){
        cin >> P[i];
    }
    sort(P, P+N, greater<unsigned long long int>());

    for(i = 0; i < N; i++){ 
        S = P[i] * (i+1); 
        if(R<S){
            R = S;
        }
    }

    cout << R << endl;
}
