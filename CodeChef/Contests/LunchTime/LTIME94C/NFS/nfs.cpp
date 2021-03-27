#include<iostream>
#include<math.h>

using namespace std;

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int u,v,a,s;
        cin >> u >> v >> a >> s;
        bool sus = false;
        if(u <= v){
           sus = true;
        }else{
            
            long long int d = (u * u) - (2 * s * a);
            long long int f = v * v;
            
            if(d <= f){
                sus = true;
            }
            //cout << d << " " << f << endl;
        }

        if(sus){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        
    }
}