#include <vector>
#include <iostream>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */     
    int a, b;
    int n, q, k, i, j;

    cin>>n>>q; // n sized variable arrays and q queries 
    
    vector<vector<int>> arr(n); // 2d vector, n variable sized vectors
    
    for (a=0; a<n; a++){
        cin>>k; // k sized each vector 
        arr[a].resize(k);
        for (b=0; b<k; b++){
            cin>>arr[a][b]; 
        }
    }
    
    for (a=0; a<q; a++){
        cin>>i>>j; // i is array number/ index and j is index in ith array
        cout<<arr[i][j]<<endl; // printing query elements from array
    }
    
    return 0;
}
