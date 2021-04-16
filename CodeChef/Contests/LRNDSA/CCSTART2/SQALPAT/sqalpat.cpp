#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int l = n / 2;
    int m = n % 2;
    for (int i = 1; i <= n; i++) {
        for(int j = 0; j < 5; j++) {
            if(i % 2 == 0) {
                cout << (i * 5) - j << " ";
            } else {
                cout << (i - 1) * 5 + j + 1 << " ";
            }
        }
        cout << endl;
    }
}
