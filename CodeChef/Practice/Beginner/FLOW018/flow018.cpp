#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,f=1;
        cin >> n;
        while(n>0){
            f *= n;
            n--;
        }
        cout << f << endl;
    }
}