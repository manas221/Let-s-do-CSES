//this is a solution to problem https://cses.fi/problemset/task/1068
#include<iostream>
using namespace std;

long int weird_algo(long int n){
    if (n == 1){
        cout<<1;
    }
    if (n%2 == 0){
        cout<<n<<" ";
        n = n/2;
        weird_algo(n);
    }
    else if ((n > 2) && (n%2 != 0)){
        cout<<n<<" ";
        n = 3*n + 1;
        weird_algo(n);
    }
}

int main(){
    long int n;
    cin>>n;
    weird_algo(n);
    return 0;
}