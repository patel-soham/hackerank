#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int queries;
    cin>>queries;
    
    set<int> s;
    for (int i=0; i<queries; i++){
        int type;
        int element;
        
        cin>>type;
        switch(type){
            case 1:  // to insert element
                cin>>element;
                s.insert(element);
                break;
            case 2: // to erase element
                cin>>element;
                if(s.find(element) != s.end()) s.erase(element);
                break;
            case 3: // to print if element exists or not
                cin>>element;
                if(s.find(element) != s.end()) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
                break;
        }
    }
    return 0;
}



