#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
    int i = 2, num;
    long first = 1;
    long second = 1;
    long sum;
    cout<<"Input number";
    cin>>num;
    while(i<num){
        sum = first+second;
        first = second;
        second = sum;
        i++;
        }
        cout<<second;
return 0;
}


