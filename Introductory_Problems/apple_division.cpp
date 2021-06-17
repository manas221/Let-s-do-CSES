#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long int minimum_difference(vector<int> values ,long int sum_of_values){
    //basic idea : we divide the values vector in different subsequences and
    //then calculating it's sum and then subtract it from the other sum
    long int prevsum = sum_of_values;
    int n = values.size();
    long int total_subsets = 1<<n;

    for (long int subsetmask = 0;subsetmask<total_subsets;++subsetmask){
        long int subset_sum = 0;
        for (long int i=0;i<n; ++i){
            if ((subsetmask & (1<<i)) != 0){
                subset_sum += values[i];
            }
        }
        prevsum = min(prevsum ,abs((2*subset_sum) - sum_of_values));
    }
    return prevsum;
}

int main(){
    int n;
    cin>>n;
    vector<int> apples;
    long int sum = 0;
    for (int i=0;i<n;++i){
        long int temp;
        cin>>temp;
        sum += temp;
        apples.push_back(temp);
    }
    cout<<minimum_difference(apples ,sum);
    return 0;
}