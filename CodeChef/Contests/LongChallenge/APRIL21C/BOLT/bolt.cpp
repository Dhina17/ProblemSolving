#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        double k1,k2,k3,v;
        cin >> k1 >> k2 >> k3 >> v;
        double timeTaken = 100.00 / (k1 * k2 * k3 * v);
        timeTaken = round(timeTaken * 100.0) / 100.0;
        //double record = ceil(9.58 * 100.0) / 100.0;
        float record = 9.58;
        if(timeTaken < record) {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
