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
    } Start;
struct End{
    int h;
    int min;
    } End;
    while(!correct_date){
        cout<<"Input Start hours";
cin>>Start.h;
cout<<"Input Start min";
cin>>Start.min;
cout<<"Input End hours";
cin>>End.h;
cout<<"Input End min";
cin>>End.min; 
if(Start.h<End.h){correct_date=true;}
if(Start.h==End.h && Start.min<End.min){correct_date=true;}
}
int a = -Start.h*60-Start.min +End.h*60 + End.min; 
cout<<a/60<<":"<<a%60;
return 0;
}
/* need checking from previous example*/