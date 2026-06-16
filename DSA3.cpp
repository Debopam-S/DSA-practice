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
