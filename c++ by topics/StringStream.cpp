#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

// convert string containing numbers seperated with commas and returning all
// numbers as vector output 
vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);  // insert string in ss
    vector<int> intarr;
    
    char comma;
    int temp;
    // extracting numbers as int and comma as char from ss
    while(ss>>temp){
        intarr.push_back(temp); // to insert elements in vector
        ss>>comma;
    }
    return intarr;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
