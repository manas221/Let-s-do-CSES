#include<iostream>

using namespace std;

long int moves(long int n){
    long int lines = n+1;
    long int total_boxes = 2 * ((lines - 2) * (lines - 3) + (lines - 3) * (lines - 2));
    long int possible_moves = ((n*n)*((n*n)-1))/2;
    return possible_moves - total_boxes;
}
int main(){
    long int n;
    cin>>n;
    for (int i = 1; i<=n; ++i){
        cout<<moves(i)<<endl;
    }
    return 0;
}