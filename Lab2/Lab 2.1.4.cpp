#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int year,month,day;
int check(string text, int min, int max){
    int part;
    while(true){
    cout<<text<<endl;
    cin>>part;
    if(part>=min && part<=max){return part;}
    cout<<"Error";
    }
    }
int main()
{
year = check("Input year",1900,2100);
month = check("Input month",1,12);
day = check ("Input day",1,31);
int result;
month-=2;
if(month<=0){
    month+=12;
    year-=1;
}
    month = month*83/32;
    month +=day;
    month +=year;
    month +=year/4;
    month -=year/100;
    month += year/400;
    result = month%7;
    cout<<result;   

}


