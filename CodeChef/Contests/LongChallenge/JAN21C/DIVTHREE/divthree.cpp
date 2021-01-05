#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N,K,D;
        cin >> N >> K >> D;
        int A;
        int totalProblems = 0;
        for(int i = 0; i < N; i++){
            cin >> A;
            totalProblems += A;
        }
        int contest = totalProblems / K;
        if(contest > D){
            cout << D << endl;
        }else{
            cout << contest << endl;
        }
    }
}