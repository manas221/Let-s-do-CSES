#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

int main(){
    ll tests;
    cin>>tests;
    while(tests--){
        ll a ,b;
        cin>>a>>b;
        if ( ((2*b - a)%3 == 0) && ( (2*a - b)%3 == 0) ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}