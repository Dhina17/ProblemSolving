#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N,M;
        cin >> N >> M;
        int A[N],B[M];
        int Asum = 0, Bsum = 0;
        for(int i = 0; i < N; i++){
            cin >> A[i];
            Asum += A[i];
        }
        for(int i = 0; i < M; i++){
            cin >> B[i];
            Bsum += B[i];
        }
        
        sort(A, A+N);
        sort(B, B+M, greater<int>());
        
        int i = 0, ans = 0;
        int ind = (N <= M) ? N : M;
        while(Asum <= Bsum){
            if(i < ind){
                int t = A[i];
                Asum -= t;
                Bsum -= B[i];
                A[i] = B[i];
                B[i] = t;
                Asum += A[i];
                Bsum += B[i];
                ans++;
                i++;
            }else{
                break;
            }
        }
        if(Asum <=  Bsum){
            ans = -1;
        }

        cout << ans << endl;
        
    }
}