#include<iostream>
using namespace std;
int main() {
    int a, b;
    char op;
    cout<<"The value of a is: "<<endl;
    cin>>a;
    cout<<"The value of b is: "<<endl;
    cin>>b;
    cout<<"The operation is: "<<endl;
    cin>>op;
    switch(op) {
        case('+'): cout<<"The value of addition is: "<<(a+b)<<endl;
                   break;
        case('-'): cout<<"The value of substraction is: "<<(a-b)<<endl;
                   break;
        case('*'): cout<<"The value of multiplication is: "<<(a*b)<<endl;
                   break;
        case('/'): cout<<"The value of division is: "<<(a/b)<<endl;
                   break;  
        case('%'): cout<<"The value of remainder is: "<<(a%b)<<endl;
                   break;  
        default: cout<<"Please enter the correct operation."<<endl;        
    }
    cout<<endl;
}
/*
OUTPUT:
The value of a is: 
3
The value of b is: 
2
The operation is: 
+
The value of addition is: 5
*/
