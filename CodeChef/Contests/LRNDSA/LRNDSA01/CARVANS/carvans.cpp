#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int S[N];
        for(int i = 0; i < N; i++){
            cin >> S[i];
        }
        int count = 1; // First car always in max speed
        for(int i = 1; i < N; i++){
            if(S[i-1]>=S[i]){
                count++;
            }else{
                S[i] = S[i-1];
            }
        }
        cout << count << endl;
    }
}