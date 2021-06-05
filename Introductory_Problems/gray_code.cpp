#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#define vecstr vector<string>

vecstr generate_gray_code(int n){
    if (n <= 1){
        //base case for the recursive approach, below is the gray code for unit length 1
        vector<string> base_condition = {"0" ,"1"};
        return base_condition;
    }

    vector<string> recursive_list = generate_gray_code(n - 1);  //recursion
    vector<string> final_list; //final result to be return

    for (int i=0;i<recursive_list.size();++i){
        //first the list obtained is appended by 0 in each element and then is pushback to final list
        string s = recursive_list[i];
        final_list.push_back("0"+s);
    }
    for (int i=recursive_list.size()-1;i>=0;--i){
        //same as above but list is pushedback in reverse to preserve the hamming distance
        //also 0 is appended here instead
        string s = recursive_list[i];
        final_list.push_back("1" + s);
    }

    return final_list;
}

void format_answer(int n){
    //formats the output and calls the recursive function
    vector<string> answer;
    answer = generate_gray_code(n);
    for (int i = 0;i<answer.size();++i){
        cout<<answer[i]<<endl;
    }
}

int main(){
    int n;
    cin>>n;     //taking input
    format_answer(n);
    return 0;
}