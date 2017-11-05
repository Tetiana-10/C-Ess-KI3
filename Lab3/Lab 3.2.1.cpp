// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
int n = sizeof(vector) / sizeof(vector[0]);
int res;
for(int i=0;i<n;i++){
    if(*(vector+i+1)<*(vector+i)){
        *(vector+i) = *(vector+i+1);
         res =  *(vector+i);
        }
    }
   cout<<res;
return 0;
}
