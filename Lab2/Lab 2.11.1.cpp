#include <iostream>
#include <string>
#include <sstream>
 #include <cmath>
using namespace std;  
int main()
{
bool correct_date = false;
int dur;
struct STRUCT{
    int h;
    int min;
    } Time;
while(!correct_date){
    cout<<"Write hours = ";
    cin>>Time.h;
    if(Time.h>=0 && Time.h<=24){correct_date=true;
    if(correct_date){
        correct_date = false;
        cout<<"Write minutes = ";
        cin>>Time.min;
        if(Time.min>=0 && Time.min<=59){correct_date=true;}
        }}
    
    }
cout<<"Input duration = ";
cin>>dur;
if(dur>0){
    cout<<Time.h+dur/60<<":"<<Time.min+dur%60;
    }
else{}
return 0;
}
//add beatiful output like 09:08