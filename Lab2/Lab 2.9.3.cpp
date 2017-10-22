#include <iostream>
#include <string>
#include <sstream>

using namespace std;  
int main()
{
   int vector[] = {1, 7, 3, 8, 3, 7,51};
bool ispalindrome = false;
int n = sizeof(vector) / sizeof(vector[0]);
for(int i = 0; i<=n;i++){
    if(vector[i]==vector[n-i-1]){
        ispalindrome = true;
        }else{break;}
    }
if(ispalindrome)
cout << "It's a palindrome";
else
cout << "It isn't a palindrome";
cout << endl;
return 0;
}