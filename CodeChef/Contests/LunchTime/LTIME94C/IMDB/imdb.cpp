#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n,x,i,s,r,max = 0;
        cin >> n >> x;
        for(i = 0; i < n; i++){
            cin >> s >> r;
            if(r > max && s <= x){
                max = r;
            }
        }
        cout << max << endl;
    }
}