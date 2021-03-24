#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,x,w = 0;
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            cin >> x;
            if((k + x) % 7 == 0){
                w += 1;
            }
        }
        cout << w <<
    }
}
