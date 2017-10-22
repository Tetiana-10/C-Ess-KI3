#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int year;
    while(true){
         cout << "Enter a year: ";
         cin >> year;
         if(year>0){break;}
         cout << "Input Gregorian year"1<<endl;
        }
      if(year%4!=0){
        cout<<"Common Year";
        }else if(year%100!=0){
            cout<<"Leap Year";
            }else if(year%400!=0){
                cout<<"Common Year";
                }else{
                    cout<<"Leap Year";
                    }
    return 0;
}
