#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
int64_t n;  
double  result = 1;
cout<<"Input n";
cin>>n;
for(int64_t i = 0; i<n;i++){
    result /=2;
    }
cout.precision(20);    
cout<<result;
return 0;
}


