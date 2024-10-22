#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    string a,b,c;
    cin >>a>>b>>c;
    
    string add=a+b;
    
    sort(add.begin(),add.end());
    sort(c.begin(),c.end());
    
    if (add==c) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
