#include <bits/stdc++.h>
#include <string>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string format (int i){
    if (i<10){
        return "0"+to_string(i);
    }
    else return to_string(i);
} 
// get time string in 12 hr format and convert it to 24 hr time string
// 07:05:45PM --->  19:05:45
string timeConversion(string s) {
    char day;
    string time;
    int hr, min, sec;
    stringstream ss(s);
    
    ss>>hr>>day>>min>>day>>sec>>day;
    if (day == 'P'){
        if (hr != 12) hr += 12; 
    }
    else if (day == 'A'){
        if (hr == 12) hr = 0;
    }
    else hr = hr;
    
    time.append(format(hr));
    time.append(":");
    time.append(format(min));
    time.append(":");
    time.append(format(sec));
    return time;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
