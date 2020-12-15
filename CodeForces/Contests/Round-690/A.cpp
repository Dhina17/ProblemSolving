// Solved in the contest

#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int r[n];
        for(int i = 0; i< n; i++){
            cin >> a[i];
        }
        r[0] = a[0];
        int l = n-1;
        for(int i = 1; i<= n-1 ; i++){
            if(i % 2 == 0){
                r[i] = a[i/2];
            }else{
                r[i] = a[l];
                l--;
            }
        }
        for(int i=0; i<n; i++){
            printf("%d ", r[i]);
        }
        cout << endl;
    }
}