#include <iostream>
#include <string>
using namespace std;
int main()
{
    string player;
    cin>>player;
    
    
    if(player.find("0000000") < 100 ||player.find("1111111") <100 ){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    

    return 0;
}