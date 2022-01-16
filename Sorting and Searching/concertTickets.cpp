#include<iostream>
#include<bits/stdc++.h>
#define li long int
using namespace std;

int main(){
    int n ,m;
    set<pair<li ,int>> tickets;
    cin>> n >> m;
    int i = 0;
    while (n--){
        pair<li ,int> ptemp;
        cin >> ptemp.first;
        ptemp.second = i;
        ++i;
        tickets.insert(ptemp);
    }

    while (m--){
        li curr;
        cin >> curr;
        //take lower bound of curr + 1
        auto iter = tickets.lower_bound({curr+1 ,0});
        //before this iter lies the answer
        if (iter == tickets.begin()){
            //answer is iter - 1 
            cout<< -1 << endl;
        }
        else {
            iter--;
            cout<<(*iter).first<<endl;
            tickets.erase(iter);
        }
    }
    return 0;
}