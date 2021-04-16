#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin >> n;

    // sum of first n odd numbers = square of n
    // sum of first n even numbers = n(n + 1)
    cout << n * n << " " << n * (n + 1) << endl;

}
