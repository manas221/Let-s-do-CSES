#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define print_array(arr, n)     for (int i = 0; i < n; i++) {  cout << arr[i] << " ";  }  cout<<endl;

int main() {
    ll n;
    cin>>n;
    ll sum = (n*(n+1))/2;
    if (sum%2 != 0){
        cout<<"NO";
        return 0;
    }
    vector<int> s1 ,s2;
    sum = sum/2;    //sum of each individual set
    while (n){
        if (sum - n >= 0){
            //this above line is very clever ,only that n goes in s1 which is not greater than sum itself
            //and sum changes after every iteration
            s1.push_back(n);
            sum = sum - n;
        }
        else {
            s2.push_back(n);
        }
        n--;
    }

    cout<<"YES"<<endl;
    cout<<s1.size()<<endl;
    print_array(s1, s1.size());
    cout<<s2.size()<<endl;
    print_array(s2, s2.size());
    return 0;
}

// inspired(lowkey copied) from https://github.com/JubaerHosain/CSES-Problem-Set-Solution/blob/main/Introductory%20Problems/Two%20Sets.cpp