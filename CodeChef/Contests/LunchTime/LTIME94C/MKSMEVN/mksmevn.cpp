/* Late summission - Seen someone answer
 */



#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long int n,total = 0,count = -1;
        cin >> n;
        long long int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            total += a[i];
        }
        bool even = total % 2 == 0;
        if(even){
            count = 0;
        }else{
            long long int q;
            for(long long int i = 0; i < n; i++){
                if(a[i] == 2){
                    count = 1;
                    break;
                }
            }
        }

        cout << count << endl;
        

    }
}