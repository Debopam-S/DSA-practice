#include<iostream>
using namespace std;
bool isEVEN(int a) {
    if (a&1) {
        return 0;
    }
    else {
        return 1;
    }
}
int main() {
    int num;
    cin>>num;
    if(isEVEN(num)) {
        cout<<"The number is even."<<endl;
    }
    else {
        cout<<"The number is odd."<<endl;
    }
}

/*
OUTPUT:
5
The number is odd.
*/