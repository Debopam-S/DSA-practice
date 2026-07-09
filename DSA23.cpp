#include<iostream>
using namespace std;
void count(int n) {
    for(int i=1; i<=n; i++) {
        cout<<i<<" ";
    }
}
int main() {
    int a;
    cin>>a;
    count(a);
}

/*
OUTPUT:
5
1 2 3 4 5 
*/