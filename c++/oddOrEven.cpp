#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n";
    cin >> n;
    if(n % 2 == 0) {
        cout << n << " is an even number.";
    } // The closing brace is placed correctly here.
    else {
        cout << n << " is an odd number";
    } // The closing brace for the else block.
}
