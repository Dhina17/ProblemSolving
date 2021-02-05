#include<iostream>

using namespace std;

void display(int arr[]){
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
}
 
// binary search
int binarySearch(int arr[], int L, int R, int x){
    if(R>=L){
        int m = L + (R-L) / 2;

        if(arr[m] == x) return m;

        if(arr[m] > x ) return binarySearch(arr, L, m-1, x);

        return binarySearch(arr, m+1, R, x);
    }else{
        return -1;
    }

}
int main(){
    int arr[5] = {1,2,3,4,5};
    int f = binarySearch(arr, 0, 4, 2);
    cout << f << endl;
    
}
