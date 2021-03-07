#include<iostream>

using namespace std;

int main(){
    int N,H,x,T;
    cin >> N >> H >> x;
    bool enough = false;
    for(int i = 0; i < N; i++) {
        cin >> T;
        if(T + x >= H){
            enough = true;
        }
    }
    if(enough){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
