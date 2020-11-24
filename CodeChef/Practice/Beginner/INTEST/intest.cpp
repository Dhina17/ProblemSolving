#include<iostream>

using namespace std;

int main(){
    // to make cin/cout faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    int count = 0;
    cin >> n >> k;
    while(n>0){
        int t;
        cin >> t;
        if(t%k == 0)
            count++;
        n--;
    }
    cout << count << endl;
}
