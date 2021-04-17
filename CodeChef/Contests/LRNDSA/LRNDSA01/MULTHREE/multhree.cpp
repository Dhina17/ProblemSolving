#include<bits/stdc++.h>

#define ll unsigned long long int

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        ll k,a,b;
        scanf("%llu %llu %llu", &k,&a,&b);
        ll dp = a + b;
        if(k > 2) {
            ll m = (a + b) % 10;
            ll p = m;
            int x,y,z,w;
            x = (2 * (a + b) ) % 10;
            y = (4 * (a + b) ) % 10;
            z = (8 * (a + b) ) % 10;
            w = (6 * (a + b) ) % 10;
            p += ((k-3) / 4) * (w + x + y + z);
            int mod = (k - 3) % 4;
            p += mod == 1 ? x : mod == 2 ? x+y : mod == 3 ? x+y+z : 0; 
            dp += p;
        }
        if(dp % 3 == 0) {
            puts("YES");
        } else {
            puts("NO");
         }
    }
}
