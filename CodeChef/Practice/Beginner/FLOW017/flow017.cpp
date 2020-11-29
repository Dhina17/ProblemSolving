#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    /*  
        int a,b,c,m,n;
        cin >> a >> b >> c;
        m = a > b ? a : b;
        n = b > c ? b : c;
        cout << (m > n ? n : m) << endl; 
    */

        int a[3];
        for(int i=0; i<3; i++){
        cin >> a[i];
        }
        sort(a, a+3);
        cout << a[1] << endl;
    }
    return 0;
}