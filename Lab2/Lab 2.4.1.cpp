#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
    int count = 0;
   unsigned int num ;
   cout<<"Input num: ";
    cin>>num;
   for(unsigned int i = 0; i< 32;i++){
       if(1&num){
           count++;
        }
           num = num >> 1;
       }
       cout<<count;
}


