#include <iostream>
#include <set>
#include <cctype>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    if (n < 26) {
        cout << "NO" << endl;
        return 0;
    }
   set<char> unique_letters;

    for (int i = 0; i < n; i++) {
        unique_letters.insert(tolower(s[i]));
    }
    if (unique_letters.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}