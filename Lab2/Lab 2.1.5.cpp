#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
    int a,b,c,d,e;
    int y;
cout<<"Input Year";
cin>>y;
a=y%19;
b=y%4;
c=y%7;
d=(a*19+24)%30;
e=(2*b + 4*c + 6*d + 5)%7;
if((d+e)<10){
    cout<<"March"+  to_string(d + e + 22);
    }else{
         cout<<"April" + to_string(y = d + e - 9);
        }
return 0;
}


