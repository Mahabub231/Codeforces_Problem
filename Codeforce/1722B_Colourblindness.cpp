#include <iostream>
#include <string>
using namespace std;

int main() {
    int t, n;
    cin >> t; 
    string Row_1, Row_2;

    for (int i = 0; i < t; i++) { 
        cin >> n;               
        cin >> Row_1 >> Row_2;   
        
        for (char &c : Row_1) {
            if (c == 'G') {
                c = 'B';
            }
        }
        for (char &c : Row_2) {
            if (c == 'G') {
                c = 'B';
            }
        }

        if (Row_1 == Row_2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
