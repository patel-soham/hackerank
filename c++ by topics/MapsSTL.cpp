#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int queries;
    cin>>queries;
    
    map<string,int> mp;
    for (int i=0; i<queries; i++){
        int type;
        string arg1;
        int arg2;
        
        cin>>type; 
        switch(type){
            case 1: // to insert or add marks to exisitng student 
            cin>>arg1>>arg2;
            if (mp.find(arg1) != mp.end()) mp[arg1] += arg2; 
            else mp.insert({arg1,arg2}); // or mp[arg2] = arg1;
            break;
            case 2: // to erase student entry
            cin>>arg1;
            mp.erase(arg1);
            break;
            case 3: // to print student marks if available
            cin>>arg1;
            if (mp.find(arg1) != mp.end()) cout<<mp[arg1]<<endl;
            else cout<<0<<endl;
            break;
        }
    }
    
    return 0;
}
