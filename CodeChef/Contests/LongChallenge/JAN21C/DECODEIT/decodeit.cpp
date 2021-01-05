#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        string S;
        cin >> N >> S;
        string ans = "";
        int k = 0;
        for(int j = N/4; j > 0; j--){
            string list = "abcdefghijklmnop";
            int in = 16;
            int i = 0;
            for(i = 0; i < 4; i++){
                in = in/2;
                if(S[i+k] == '0'){
                    list = list.substr(0, in);
                }else{
                    list = list.substr(in);
                }
            }
            k += i;
            ans.append(list);
        }
        cout << ans << endl;
    }
}