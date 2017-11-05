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
        if(year%400 == 0){
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
int daysBetween(Date d1, Date d2) {
	if(d1.year>d2.year){
		return -1;
	}else if(d1.year=d2.year){
	    if(d1.month>d2.month){
	        return -1;
	        }else if (d1.day>d2.day){
	            return -1;
	            }
	    }else{
    int res=0;
for(int i= d1.year;i<=d2.year-1;i++){
    if(isLeap(i)) {
        res += 366;
        }else{
            res+=365;
            }
    }
    return res - dayOfYear(d1)+dayOfYear(d2);
	}
}
int main(void) {
Date since,to;
cout << "Enter first date (y m d): ";
cin >> since.year >> since.month >> since.day;
cout << "Enter second date (y m d): ";
cin >> to.year >> to.month >> to.day;
cout << daysBetween(since,to) << endl;
return 0;
}

