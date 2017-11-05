// Example program
#include <iostream>
#include <string>

using namespace std;

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
int main(void) {
for(int yr = 1995; yr < 2017; yr++)
cout << yr << " -> " << isLeap(yr) << endl;
return 0;
}
