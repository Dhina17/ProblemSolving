#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n,total,red = 0;
        cin >> n;
       if(n <= 4){
            red = (n - 1) == 0 ? 1 : 3 * pow(2, n - 1);
        }else{
            int m = n % 4;
            red += 24 + (((n/4) - 1) * 40);
            if( m != 0){
                switch(m){
                    case 1: 
                        red += 5;
                        break;
                    case 2: 
                        red += 14;
                        break;
                    case 3: 
                        red += 24;
                        break;
                }
            }
        }

        //cout << red << endl;
        total = (21 * n) - red;

        cout << total << endl;
    }
}
