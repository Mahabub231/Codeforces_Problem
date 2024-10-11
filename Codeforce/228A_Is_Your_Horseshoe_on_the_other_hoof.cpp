#include <iostream>
#include<set>
using namespace std;
int main()
{
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    
    set<int>different_coler={s1,s2,s3,s4};
    
    int buy=4-different_coler.size();
    cout<<buy<<"\n";

    return 0;
}