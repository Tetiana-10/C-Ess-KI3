#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
    int num;
    long result =1;
    cout<<"Input num";
    cin>>num;
    for(int i=1;i<=num;i++){
        result*=i;
        }
    cout<<result;
return 0;
}