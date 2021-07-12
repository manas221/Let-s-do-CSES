#include<iostream>
#include<bits/stdc++.h>
#define li long int
using namespace std;

int main(){
    li n;
    cin>>n;
    li arr[n];
    for (li i=0;i!=n;++i){
        cin>>arr[i];
    }
    sort(arr ,arr+n);
    li distinct_count = 0;
    for (int i=0;i!=n;++i){
        if (arr[i] != arr[i+1]){
            ++distinct_count;
        }
    }
    cout<<distinct_count<<endl;
    return 0;
}