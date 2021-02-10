#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        long long int X,Y,K,N;
        cin >> X >> Y >> K >> N;
        long long int P[N],C[N],tmp = X - Y;
        bool found = false;
        for(long long int i = 0; i < N; i++){
            cin >> P[i] >> C[i];
        }
        for(long long int i = 0; i < N; i++){
             if(P[i] >= tmp && C[i] <= K){
                cout << "LuckyChef" << endl;
                found = true;
                break;
            }
        }
        if(!found){
            cout << "UnluckyChef" << endl;
        }
    }
}
