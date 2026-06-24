#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int product=1;
    int sum=0;
    while (n!=0) {
        int digit=(n%10);
        product=(product*digit);
        sum=(sum+digit);
        n=n/10;
    }
    int subtract=(product-sum);
    cout<<"The answer is: "<<subtract<<endl;
}

/*
OUTPUT:
234
The answer is: 15
*/
