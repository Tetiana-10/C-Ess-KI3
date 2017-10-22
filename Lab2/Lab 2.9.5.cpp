#include <iostream>
#include <string>
#include <sstream>
 #include <cmath>
using namespace std;  
int main()
{
double matrix[][4] = { { 1, 2, 3, 4 },
{ 2, 2, 3, 1 },
{ 3, 3, 3, 2 },
{ 4, 1, 2, 4 } };
int x = sizeof(matrix[0]) / sizeof(matrix[0][0]);
int  y = sizeof(matrix) / sizeof(matrix[0]);
bool issymmetric = true;
for(int i = 0; i<x;i++){
    for(int j=0;j<y;j++){
        if(matrix[j][i] != matrix[i][j]){issymmetric=false;}
        }
       cout<<endl;
    }
if(issymmetric)
cout << "The matrix is symmetric" << endl;
else
cout << "The matrix is not symmetric" << endl;
return 0;
}