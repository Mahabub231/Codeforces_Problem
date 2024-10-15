#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int move = 0;
    for (int i = 0; i < t.length(); ++i)
    {
        if (t[i] == s[move])
        {
            move += 1;
        }
    }
    cout << move + 1 << endl;
    return 0;
}