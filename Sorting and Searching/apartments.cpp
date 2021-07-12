#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n ,m ,k;
    cin>>n>>m>>k;
    vector<long int> applicants ,apartments;
    for (long int i=0;i<n;++i){
        long int temp;
        cin>>temp;
        applicants.push_back(temp);
    }

    sort(applicants.begin() ,applicants.end());
    for (long int i=0;i<m;++i){
        long int temp;
        cin>>temp;
        apartments.push_back(temp);
    }
    sort(apartments.begin(), apartments.end());

    long int counter = 0;

    long int applicant = 0, apartment = 0;
    while(applicant<n && apartment<m){
        if (abs(applicants[applicant] - apartments[apartment]) <= k){
            //if apartment and applicant match
            ++counter;
            ++applicant;
            ++apartment;
        }
        else {
            if (applicants[applicant] - apartments[apartment] > k){
                //if apartment's size is less than the applicant's limit 
                //then move the apartment pointer by one to right to find bigger apartment
                ++apartment;
            }
            else{
                //if apartment size is small than required
                //skip that applicant
                ++applicant;
            }
        }
    }
    cout<<counter;
    
    return 0;
}