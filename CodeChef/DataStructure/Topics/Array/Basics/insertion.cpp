#include<iostream>

using namespace std;

// insert an element in an specific position
void insertion(int arr[], int n, int p, int x) {
    for(int i = n-1; i >= p; i--){
        arr[i] = arr[i-1];
    }
    arr[p] = x;
    n++;
}

// display the elements
void display(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    insertion(arr, 5, 3, 10);
    display(arr, 5);
}