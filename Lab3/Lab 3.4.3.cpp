// Example program
#include <iostream>
#include <string>

using namespace std;

struct Date {
int year;
int month;
int day;
};
bool isLeap(int year) {
if(year%4==0){
    if(year%100==0){
        if(year%400==0){
            return true;
            }else{
                return false;
                }
        }else{
            return true;}
    }else{
        return false;
        }
}
int monthLength(int year, int month) {
if(month%2!=0){
    return 31;
    }
        if((month==2)&(!isLeap(year))){
            return 28;
            }else if((month==2)&(isLeap(year))){
                return 29;
                }else{
                    return 30;
                    }
}
int dayOfYear(Date date) {
    int res =0;
for(int i=1;i<=date.month-1;i++){
    res+=monthLength(date.year,i);
    }
    return res+date.day;
}
int main(void) {
Date d;
cout << "Enter year month day: ";
cin >> d.year >> d.month >> d.day;
cout << dayOfYear(d) << endl;
return 0;
}

