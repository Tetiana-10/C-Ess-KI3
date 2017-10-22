#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
int c0, steeps = 0;
 while(true){
     cout<<"Input number";   
     cin>>c0;
     if(c0>0){break;}
     }
while(c0!=1){
    if(c0%2==0){
        c0/=2;
        }else{
            c0=c0*3 +1;
            }
    cout<<c0<<endl;
    steeps++;
    }    
cout<<"Steeps = " +to_string(steeps);
return 0;
}


