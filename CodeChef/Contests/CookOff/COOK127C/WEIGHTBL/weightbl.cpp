#include<iostream>

using namespace std;

int main(){
    int t,w1,w2,x1,x2,m,d;
    cin >> t;
    while(t--){
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        d = w2 - w1;
        if(d < ( m * x1 ) || d > (m * x2)){
            cout << "0" << endl;
        }else{
            cout << "1" << endl;
        }
    }
}