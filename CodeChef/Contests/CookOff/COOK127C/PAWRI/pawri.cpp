#include<iostream>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,pos;
    string s;
    string p = "party";
    cin >> t;
    while(t--){
        cin >> s;
        pos=0;
        while((pos = s.find(p, pos)) != string::npos){
            //pos = s.find(p);
            s.replace(pos+2, 3, "wri");
            pos += 5;
        }
        cout << s << endl;
    }
}