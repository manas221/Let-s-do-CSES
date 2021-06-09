#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string hanoi(int ndisks ,int fromPeg ,int toPeg){
    int helpPeg;
    if (ndisks <= 1){
        // string firstchar = to_string(fromPeg);
        string s = to_string(fromPeg) + " " + to_string(toPeg) + "\n";
        return s;
    }
    else {
        helpPeg = 6 - (fromPeg + toPeg);
        //move n-1 disks to helpPeg
        string sol1 = hanoi(ndisks-1 ,fromPeg ,helpPeg);

        //next ,move the remaining disk to toPeg
        string mystep = to_string(fromPeg) + " " + to_string(toPeg) + "\n";

        //move n-1 disks to toPeg
        string sol2 = hanoi(ndisks-1 ,helpPeg ,toPeg);

        string mySol = sol1 + mystep + sol2;
        return mySol;
    }
    return NULL;
}

int main(){
    int n;
    cin>>n;
    int initial_fromPeg = 1;
    int initial_toPeg = 3;
    cout << pow(2 ,n) - 1 << endl;
    cout<<hanoi(n ,initial_fromPeg ,initial_toPeg);
    return 0;
}

//inspired(lowkey copied) from http://www.mathcs.emory.edu/~cheung/Courses/170/Syllabus/13/hanoi.html