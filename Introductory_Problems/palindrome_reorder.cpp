#include<iostream>
#include<bits/stdc++.h>


using namespace std;

#define ll long long


int main(){
    string input;
    cin>>input;

    vector<int> frequency_count(26 ,0);

    for(auto c : input){
        ++frequency_count[c - 'A'];
    }

    int no_of_odd_frequencies = 0;
    for (int i = 0; i<frequency_count.size(); ++i){
        if (frequency_count[i]%2 == 1){
            ++no_of_odd_frequencies;
        }
    }

    if (no_of_odd_frequencies > 1){
        cout<<"NO SOLUTION";
        return 0;
    }


    string result;
    for (int i = 0; i < 26; i++){
        if (!(frequency_count[i] % 2)){
            for (int j = 0; j < frequency_count[i] / 2; j++)
                result.push_back(i + 'A');
        }
    }
    for (int i = 0; i < 26; i++){
        if (frequency_count[i] % 2){
            for (int j = 0; j < frequency_count[i]; j++)
                result.push_back(i + 'A');
        }
    }
    for (int i = 25; i >= 0; i--){
        if (!(frequency_count[i] % 2)){
            for (int j = 0; j < frequency_count[i] / 2; j++)
                result.push_back(i + 'A');
        }
    }
    cout<<result<<endl;
    return 0;
}