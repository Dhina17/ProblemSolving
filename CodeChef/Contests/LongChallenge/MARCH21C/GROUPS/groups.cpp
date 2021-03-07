#include<iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        string S;
        cin >> S;
        int group = 0;
        bool counted = false;
        for(int i = 0; i < S.length(); i++){
            if(!counted && S[i] == '1'){
                group++;
                counted = true;
            }
            if(S[i] == '0'){
                counted = false;
            }
        }
        cout << group << endl;
    }
}
