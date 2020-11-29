#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        char r;
        cin >> a >> b;
        if( a != b){
            if(a>b){
                r = '>';
            }else{
                r = '<';
            }
        }else{
            r = '=';
        }
        cout << r << endl;
    }
}