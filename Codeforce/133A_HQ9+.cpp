#include <iostream>
using namespace std;

int main() {
    string p;
    cin >> p;
    bool yes = false; 

    for (int i = 0; i < p.size(); i++) {  
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
            yes = true;
            break;  
        }
    }

    if (yes) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
