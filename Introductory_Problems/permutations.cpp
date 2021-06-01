#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    unsigned int n;
    cin>>n;

    if (n == 1){
        cout<<n;
    }

    else if (n < 5 && n > 1 && n != 4){
        cout<<"NO SOLUTION";
    }

    else {
        for (int i = 2; i <= n; i = i + 2){
            cout << i << " ";
        }
        for (int i = 1; i<=n; i = i+2){
            cout<<i<<" ";
        }
    }
    return 0;
}