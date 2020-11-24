#include<iostream>

using namespace std;

int main(){
    unsigned int X;
    float Y;
    cin >> X >> Y;
    if(X+0.50 > Y || X%5 != 0){
        cout << Y << endl;
    }else{
        cout << Y- X - 0.50 << endl;
    }
    return 0;
}