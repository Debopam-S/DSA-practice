#include<iostream>
using namespace std;
bool search(int arr[], int size, int key) {
    for(int i=0; i<size; i++) {
        if (arr[i]==key) {
            return 1;
        }
    }
    return 0;
}
int main() {
    int arr[10] = {10, -80, 90, 40, 5, 79, 78, 99, 33, 333};
    cout<<"Enter the element to search for: "<<endl;
    int key;
    cin>>key;
    bool found = search(arr, 10, key);
    if(found) {
        cout<<"This number is present."<<endl;
    }
    else {
        cout<<"This number is not present."<<endl;
    }
}
/*
OUTPUT:
Enter the element to search for: 
9
This number is not present.
*/