#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */       int n;
    cin>>n; // collect size of array
    
    vector<int> arr(n);

    //WAY 1
    for (auto i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    /*
    WAY 2
    for (auto& i : arr){
        cin>>i;
    }*/
    sort(arr.begin(),arr.end()); //ascending sort
    // sort(arr.begin(),arr.end(),greater<int>()); //descending sort
    
    // WAY 3
    for (auto j=arr.begin(); j<arr.end(); j++){
        cout<<*j<<" ";
    }
    
    return 0;
}
