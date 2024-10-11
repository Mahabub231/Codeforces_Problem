#include <iostream>
#include<string>
#include<set>
using namespace std;

int main() {
    string username;
    cin >> username;
    set<char>Size;
    for(char c:username){
        Size.insert(c);
    }
    int Size_lenth = Size.size();
    if (Size_lenth % 2 == 1) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}
