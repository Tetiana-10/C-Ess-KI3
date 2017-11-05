// Example program
#include <iostream>
#include <string>
#include <ctime>

using namespace std;
bool isPrime(int num) {
    bool res = true;
  for(int i =2;i<=num/2;i++){
      if(num%i==0){
          res = false;
          break;
          }
      }
      return res;
}
int main(void) {
for(int i = 0; i <= 21; i++)
if(isPrime(i))
cout << i << " ";
cout << endl;
return 0;
}
