#include<iostream>

using namespace std;

int main(){
    int r,o,c;
    cin >> r >> o >> c;
    int rem = 6 * (20 - o);
    int run = rem * 6;
    if( (run + c) > r){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}