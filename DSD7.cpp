#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i = 1;
    while(i<=n) {
        int j = 1;
        char var = 'A';
        while (j<=n) {
            cout<<var;
            var = var + 1;
            j = j+1;
        }
        cout<<endl;
        i = i + 1;
    }
}

/*
OUTPUT:
3
ABC
ABC
ABC
*/
