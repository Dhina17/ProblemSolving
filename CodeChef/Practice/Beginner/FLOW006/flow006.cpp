#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,r=0,sum=0;
        cin >> n;
        while(n){
            r = n % 10;
            sum += r;
            n = n / 10;
        }
        cout << sum << endl;
    }
    return 0;
}