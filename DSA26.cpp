#include<iostream>
#include<climits>
using namespace std;
int getMAX(int num[], int n) {
    int max = INT_MIN;
    for(int i=0; i<n; i++) {
        if (num[i]>max) {
            max = num[i];
        }
    }
    return max;
}
int getMIN(int num[], int n) {
    int min = INT_MAX;
    for(int i=0; i<n; i++) {
        if (num[i]<min) {
            min = num[i];
        }
    }
    return min;
}
int main() {
    int size;
    cin>>size;
    int num[100];
    for(int i=0; i<size; i++) {
        cin>>num[i];
    }
    cout<<"The maximum number is: "<<getMAX(num, size)<<endl;
    cout<<"The minimum number is: "<<getMIN(num, size)<<endl;
}
/*
5
10 15 20 14 6
The maximum number is: 20
The minimum number is: 6
*/