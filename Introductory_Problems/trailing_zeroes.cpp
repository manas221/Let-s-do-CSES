#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define ll unsigned long long

int main(){
    ll n;
    cin>>n;
    ll no_of_5 = 0;

    //no of 5 will always be less than 2's in n!
    //so we have to calculate no of 5's in n!
    //using legendere's formula for prime p in n
    for (ll i = 5; n/i>=1; i*=5){
        no_of_5 += n/i;
    }
    cout<<no_of_5;
    return 0;
    }