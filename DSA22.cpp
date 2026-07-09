#include<iostream>
using namespace std;
int factorial(int n) {
    int fact = 1;
    for (int i=1; i<=n; i++) {
        fact = fact * i;
    }
        return fact;
    }
    int nCr(int n, int r) {
        int nume = factorial(n);
        int denom = factorial(r) * factorial(n-r);
        int ans = nume/denom;
        return ans;
    }
    int main() {
        int n;
        int r;
        cout<<"Enter n: "<<endl;
        cin>>n;
        cout<<"Enter r: "<<endl;
        cin>>r;
        int Answer = nCr(n,r);
        cout<<"The value of nCr is: "<<Answer<<endl;
    }

/*
OUTPUT:
Enter n: 
4
Enter r: 
2
The value of nCr is: 6
*/