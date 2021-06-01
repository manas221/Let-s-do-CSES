#include<iostream>

using namespace std;

long long int value_at(long long int row ,long long int col){
    long long int value;
    if (row > col){
        if (row%2 == 0){
            value = (row*row - col) + 1;
        }
        else {
            value = (((row - 1)*(row - 1) + 1) + col) - 1;
        }
    }
    else {
        if (col%2 == 0){
            value = (((col-1)*(col-1)+1) + row) - 1;
        }
        else{
            //col is bigger and odd
            value = (col*col - row) + 1;
        }
    }
    return value;
}

int main(){
    int n;
    cin>>n;
    while (n--){
        //this loop will run n times
        long long int row ,col;
        cin>>row>>col;
        cout<<value_at(row ,col)<<endl;
    }
    return 0;
}