#include<iostream>
using namespace std;
int main() {
int n;
cin>>n;
int i = 2;
while(i<n) {
    if(n%i==0) {
        cout<<"This number is not prime for: "<<i<<endl;
    }
    else {
        cout<<"This number is prime for: "<<i<<endl;
    }
    i = i+1;
}
}
/*
OUTPUT:
9
This number is prime for: 2
This number is not prime for: 3
This number is prime for: 4
This number is prime for: 5
This number is prime for: 6
This number is prime for: 7
This number is prime for: 8
    */
