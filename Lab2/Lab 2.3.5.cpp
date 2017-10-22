#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
    int n = 0;
    while(true){
        cout<<"Input positive number, less than 100 : ";
        cin>>n;
        if(n>0 && n<100){break;}
        }
cout << '+';
for(int i = 0; i < 4; i++)
cout << '-';
cout << '+' << endl;
for(int i = 0; i < 4; i++) {
cout << '|';
for(int j = 0; j < 4; j++)
cout << ' ';
cout << '|' << endl;
}
cout << '+';
for(int i = 0; i < 4; i++)
cout << '-';
cout << '+' << endl;
return 0;
}


