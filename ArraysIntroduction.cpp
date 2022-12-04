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
    
    //int* ptr = new int[n];  
    // OR
    int ptr[n]; // Unlike C, C++ allows dynamic allocation of arrays at runtime without special calls like malloc().
    
    int i =0;
    for (i=0; i<n; i++) cin>>ptr[i]; // taking input
    
    for(i=n-1; i>=0; i--) cout<<ptr[i]<<" "; // printing output
    
    return 0;
}
