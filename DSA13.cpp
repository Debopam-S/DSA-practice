#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i = 1;
    while(i<=n) {
        int j = 1;
        while(j<=i) {
            char ch = (n+j-i+'A'-1);
            cout<<ch;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}

/*
OUTPUT:
4
D
CD
BCD
ABCD
*/