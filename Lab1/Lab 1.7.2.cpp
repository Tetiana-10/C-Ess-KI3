#include <iostream>
using namespace std;
int main(void) {
float a1,a2;
float epsilon = 0.000001;
cout << "a1:  ";
cin >> a1;
cout << "a2:  ";
cin >> a2;
if((1/a1- 1/a2)< epsilon)
{
    cout<< "Results are  equal (by 0.000001 epsilon)";
}
else
{
     cout<< "Results are not equal (by 0.000001 epsilon)";
}
return 0;
}
