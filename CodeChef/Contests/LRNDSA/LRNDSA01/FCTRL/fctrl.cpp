#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        long long int N,i;
        cin >> N;
        int count = 0;
        for(i = 5; N/i >= 1; i *=5){
            count += N/i;
        }
        cout << count << endl;
    }
}