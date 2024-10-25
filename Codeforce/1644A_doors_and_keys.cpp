#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string hallway;
        cin>>hallway;
        
        int open=0;
        int Key_R=0;
        int Key_B=0;
        int Key_G=0;
        
        for(int i=0;hallway[i]!=0 && open==0;i++)
        {
            if(hallway[i]=='r'){
                Key_R++;
             }else if(hallway[i]=='b'){
                  Key_B++;
               }else if(hallway[i]=='g'){
                    Key_G++;
                 }else if(hallway[i]=='R'){
                     if(Key_R>=1){
                          open=0;
                        }else{
                          open=1;
                        }
                  }else if(hallway[i]=='B'){
                           if(Key_B>=1){
                               open=0;
                             }else{
                                open=1;
                                  }
                     }else if(hallway[i]=='G'){
                              if(Key_G>=1){
                                  open=0;
                                }else{
                                   open=1;
                                   }
                        }else{
                             open=1;
                             }
       }
          if(open==1){
               cout<<"NO"<<endl;
          }else{
             cout<<"YES"<<endl;
           }
    }

    return 0;
}