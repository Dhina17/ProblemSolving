#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int N;
		cin >> N;
		int W[N],total = 0;
		for(int i = 0; i < N; i++){
			cin >> W[i];
			total += W[i];
		}

		int count = total - *min_element(W , W+N) * N;
		cout << count << endl;

/*		sort(W, W+N);
		int count = 0;

//		while(W[0] != W[N-1]) {
			count++;
			for(int i = N-1 ; i > 0; i--) {
				W[i]--;
			}
			sort(W, W+N);
		}
		cout << count << endl; */

	}
}
