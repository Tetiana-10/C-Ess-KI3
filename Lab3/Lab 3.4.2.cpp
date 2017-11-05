// Example program
#include <iostream>
#include <string>

using namespace std;

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

int main(void) {
for(int yr = 2000; yr < 2002; yr++) {
for(int mo = 1; mo <= 12; mo++)
cout << monthLength(yr,mo) << " ";
cout << endl;
}
return 0;
}
