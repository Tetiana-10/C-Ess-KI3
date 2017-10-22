#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
double pi4 = 0.;
long n;
cout << "Number of iterations? ";
cin >> n;
for(float i=1.;i<=n;i+=4.){
    pi4 += 1./i - 1./(i+2.);
    }
cout.precision(20);
cout << "Pi = " << (pi4 * 4.) << endl;
return 0;
}

