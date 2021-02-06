#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        long long int A[N],t1;
        for(int i = 0; i < N; i++){
            cin >> A[i];
        }
        sort(A, A+N);
        t1 = abs(A[0] - A[1]) + abs(A[1] - A[N-1]) + abs(A[N-1] - A[0]);
        cout << t1 << endl;
    }
}
