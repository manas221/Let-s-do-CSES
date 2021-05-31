#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    string input;
    cin>>input;
    int longest_length = 0;
    for (decltype(input.length()) i = 0;i != input.length(); ++i){
        //iterate over each element of  the string input
        int temp = 0;
        while (input[i] == input[i+1]){
            ++temp;
            ++i;
        }
        if (temp >= longest_length){
            longest_length = temp;
        }
    }
    cout<<longest_length+1;
    return 0;
}