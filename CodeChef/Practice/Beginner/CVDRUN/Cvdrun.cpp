#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t>0){
        int N,K,X,Y,i;
        cin >> N >> K >> X >> Y;
        bool inf = false;
        i = X;
        do{
            i = (i + K)%N;
            if(i == Y){
                inf = true;
                cout << "YES" << endl;
            }
        }while(i != X);
        if(!inf){
            cout << "NO" << endl;
        }
        t--;
    }
}