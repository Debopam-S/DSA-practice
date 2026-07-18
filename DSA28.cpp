#include<iostream>
using namespace std;
void reverse(int arr[], int n) {
    int start = 0;
    int end = (n-1);
    while (start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printarr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
   int arr[5] = {2, 4, 6, 8, 0};
   int brr[6] = {7, 9, 3, 2, 5, 4};
   reverse(arr, 5);
   reverse(brr, 6);
   printarr(arr, 5);
   printarr(brr, 6);
}
/*
OUTPUT:
0 8 6 4 2 
4 5 2 3 9 7 
*/