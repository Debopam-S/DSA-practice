#include<iostream>
using namespace std;
void dummy(int n) {
    n++;
    cout<<"The value of n is: "<<n<<endl;
}
int main() {
    int n;
    cin>>n;
    dummy(n);
    cout<<"The value of n is: "<<n<<endl;
}

/*
OUTPUT:
5
The value of n is: 6
The value of n is: 5
*/