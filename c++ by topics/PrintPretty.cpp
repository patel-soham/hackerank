#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        // showbase - for '0x' in hex 
        // left / right - for justification
        // uppercase / nouppercase - for switching cases
        // setw() - set MAX width to fill data
        // setfill(<char>) / setfill(' ') - fill char for remaining width bits or turn off
        // showpos / noshowpos - for +,- signs before number
        // setprecision() - MAX precision
        // fixed - fixed precision 
        // setprecision (-1) - for default float field
        
        // 1 
        cout << hex << left << showbase << nouppercase; 
        cout << (int64_t) A << endl << noshowbase; 

        // 2
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); 
        cout << B << endl << setfill(' ');

        // 3
        cout << scientific << uppercase << noshowpos << setprecision(9); 
        cout << C << endl; // actual printed part
	}
	return 0;

}
