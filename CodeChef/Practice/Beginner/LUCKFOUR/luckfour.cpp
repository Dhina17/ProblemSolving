#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count=0;
        while(n){
            int r = n % 10;
            if(r == 4)
                count++;
            n = n / 10;
        }
        cout << count << endl;
    }
    return 0;
}