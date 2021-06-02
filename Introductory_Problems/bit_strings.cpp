//https://www.geeksforgeeks.org/modulo-1097-1000000007/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define ull unsigned long long

int main(){
    ull n;
    ull lim = 1e9 + 7;
    cin>>n;
    ull res = 1;
    for (ull i = 1; i <= n; ++i){
        res = (res*2)%lim;
    }
    cout<<res;
    return 0;
}

/*
    (a * b) % c = ((a % c) * (b % c)) % c
    from above property ,a^2something = ((a*2)%c)*2-----)%c
*/