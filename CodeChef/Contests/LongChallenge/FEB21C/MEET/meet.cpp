#include<iostream>

using namespace std;

int convertTo24(string time){
    string t = time.substr(0,5);
    int hour = stoi(t.substr(0,2));

    if(time.find("PM") != string::npos && time.find("12:") == string::npos){
        hour += 12;
        //string s = t.replace(0,3,to_string(hour));
        //cout << s << endl;
        return stoi(t.replace(0,3,to_string(hour)));
        //return 1;
    }else if(time.find("AM") != string::npos && time.find("12:") != string::npos ){
        //cout << time << " " << t.replace(0,3,"00") << endl;
        return stoi(t.replace(0,3,"00"));
        //return 0;
    }else{
        //cout << t.replace(2,1,"") << endl;
        return stoi(t.replace(2,1,""));
    }
}


int main(){
    int T;
    cin >> T;
    while(T--){
        string P,P1,P2,L,L1,L2,R,R1,R2;
        cin >> P1 >> P2;
        P = P1.append(P2);
        
        int N;
        cin >> N;
        string ans = "";
        string Lrr[N],Rrr[N];
        for(int i = 0; i < N; i++){
            cin >> L1 >> L2 >> R1 >> R2;
            Lrr[i] = L1.append(L2);
            Rrr[i] = R1.append(R2);
        }
        for(int i = 0; i < N; i++){
            if((convertTo24(Lrr[i]) <= convertTo24(P)) && (convertTo24(P) <= convertTo24(Rrr[i]))){
                ans.append("1");
            }else{
                ans.append("0");
            }
        }
        cout << ans << endl;

    }
}
