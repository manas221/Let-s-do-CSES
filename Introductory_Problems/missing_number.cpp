//solution to the problem https://cses.fi/problemset/task/1083
#include<iostream>

using namespace std;

int main(){
    long int n;
    cin>>n;
    bool array[n] = {0};
    for (int i = 0;i!=n-1;++i){
        long int input;
        cin>>input;
        array[input - 1] = 1;
    }
    for (int i = 0;i!=n;++i){
        if (array[i] == 0){
            cout<<i+1;
        }
    }
    return 0;

    /* I just input all the numbers and compared it with index of the boolean array initialized at 1
    for each input corresponding index value was flipped 1, at end the index of value zero + 1 is missing number*/
}