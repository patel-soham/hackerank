#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num; 
    cin>>num; // collect size of soreted array
    
    vector<int> arr(num);
    for(auto& i : arr) cin>>i;
    
    
    int queries;
    cin>>queries;
    for (int j=0; j<queries; j++){
        int number;
        cin>>number;
        
        std::vector<int>::iterator itr = lower_bound(arr.begin(),arr.end(),number);
        
        if (arr[itr - arr.begin()] == number) cout<<"Yes "<<itr - arr.begin() + 1 <<endl; // +1 added for index + 1
        else{
            cout<<"No "<<itr - arr.begin() + 1 <<endl; // +1 added for index + 1
        }  
    }
    
    return 0;
}
