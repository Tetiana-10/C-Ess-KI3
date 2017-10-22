#include <iostream>
#include <string>
#include <sstream>
 #include <cmath>
using namespace std;  
int main()
{
double vector[] = { 1., 2., 3., 4., 5. };
int n = sizeof(vector) / sizeof(vector[0]);
double ArithmeticMean = 0;
double HarmonicMean = 0;
double GeometricMean = 1.;
double RootMeanSquare;
for(int i = 0; i<n;i++){
    ArithmeticMean += vector[i]/n;
    HarmonicMean +=  pow (vector[i],-1);
    GeometricMean *= vector[i];
    RootMeanSquare += vector[i]*vector[i];
    }
cout << "Arithmetic Mean = " << ArithmeticMean << endl;
cout << "Harmonic Mean = " << n/HarmonicMean << endl;
cout << "Geometric Mean = " << pow(GeometricMean,1./n) << endl;
cout << "RootMean Square = " <<  sqrt (RootMeanSquare/n) << endl;
cout << endl;
return 0;

}