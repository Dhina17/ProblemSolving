#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s,f;
        cin >> n;
        f = n % 10;
        while(n>9){
            n = n / 10;
        }
        cout << n+f << endl;
    }
}