#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        long long int C;
        cin >> N >> C;
        int arr;
        long long int total = 0;
        for(int i = 0; i < N; i++){
            cin >> arr;
            total += arr;
        }
        if(total > C){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }
}