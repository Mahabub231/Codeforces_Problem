#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, n;
    cin >> t;
    
 
    for (int i = 0; i < t; i++) {
        cin >> n; 
        vector<int> a(n);
        unordered_map<int, int> freq;
 
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
            freq[a[j]]++;
        }
        int score = 0;
        for (const auto &pair : freq) {
            int count = pair.second;
            score += count / 2;
        }
        cout<<score<<endl;
    }
 
 
    return 0;
}