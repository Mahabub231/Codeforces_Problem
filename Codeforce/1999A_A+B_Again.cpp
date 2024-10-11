#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    int sum=0;
    while(t--){
     cin>>n;
        int first=n/10;
        int last=n%10;
        sum=first+last;
        cout<<sum<<"\n";
    }
    return 0;
}