#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    
    vector<int> arr(n); // already has n elements with 0 value
    
    /* 2 mistakes
    // 1. array.size increasing, leads to infinite loop
    for (int i=0; i<arr.size(); i++){
        int temp;
        cin>>temp;
        arr.push_back(temp); //2.this will add extra elements on n
    }
    // to use above implementation define empty vector arr not arr(n)
    // and use i=0; i<n; i++ with pushback 
    // OR
    // while (cin >> input) V.push_back(input);
    */
    
    // int doesn't work here, only auto
    // below is same as 
    //for (auto& i: arr) cin>>i not *i
    for (auto i=arr.begin(); i!=arr.end(); i++){
        cin>>*i;
    }
    
    //or 
    //for (int i=0; i<arr.size(); i++){
    //    cin>>arr[i];
    //}
    
    // Removing one element from vector
    int j; //range 1 to arr.size() not 0 to arr.size()-1
    cin>>j;
    if (j == 0) arr.erase(arr.begin());
    else if (j==arr.size()) arr.erase(arr.end());
    else arr.erase(arr.begin()+j-1);
    
    //removing range from vector
    int start, stop; // erase inclusive start, exclusive stop
    cin>>start>>stop;
    arr.erase(arr.begin()+start-1,arr.begin()+stop-1);
    
    cout<<arr.size()<<endl;
    for (auto& g: arr) cout<<g<<" ";
    
    
    return 0;
}
