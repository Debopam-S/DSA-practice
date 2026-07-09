#include<iostream>
using namespace std;
bool isPRIME(int a) {
    for(int i=2; i<a; i++) {
        if(a%i==0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    cin>>n;
    if(isPRIME(n)) {
        cout<<"This number is prime."<<endl;
    }
    else {
        cout<<"This number is not prime."<<endl;
    }
}

/*
OUTPUT:
22
This number is not prime.
*/