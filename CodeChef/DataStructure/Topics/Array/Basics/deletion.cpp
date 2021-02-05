#include<iostream>

using namespace std;

// insert an element in an specific position
void deletion(int arr[], int n, int p) {
    for(int i = p; i < n; i++){
        arr[i] = arr[i+1];
    }
    n--;
}

// display the elements
void display(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    deletion(arr, 5, 3);
    display(arr, 4); // after delete n = 4
}