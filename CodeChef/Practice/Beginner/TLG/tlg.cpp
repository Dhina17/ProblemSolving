#include<iostream>

using namespace std;

int main(){
    int r,ts1=0,ts2=0,l1=0,l2=0;
    cin >> r;
    while(r--){
        int s1,s2;
        cin >> s1 >> s2;
        ts1 += s1;
        ts2 += s2;
        if(ts1 > ts2){
            l1 = (ts1-ts2 > l1) ? ts1-ts2 : l1;
        }else{
            l2 = (ts2-ts1 > l2) ? ts2-ts1 : l2;
        }
    }
    int W = l1 > l2 ? 1 : 2;
    int L = (W == 1)? l1 : l2;
    cout <<  W << " " << L << endl;
    return 0;
}