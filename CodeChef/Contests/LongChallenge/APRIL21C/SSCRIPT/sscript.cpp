#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n,k,c = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        /*string kstr = "";
        for(long long int i = 0; i < k; i++){
            kstr.append("*");
        }
        if(s.find(kstr) != string::npos){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        } */
        bool found = false;
        for(long long int i = 0; i < n; i++){
            if(s[i] == '*'){
                c++;
                if(c == k){
                    found = true;
                    break;
                }
            }else{
                c = 0;
            }
        }

        if(found){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
}
