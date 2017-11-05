// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
int matrix[10][10] = { };
int a = 0, t=0;
for(int i=0;i<10;i++){
    a = i*10;
    for( int j =0;j<10;j++){
        *(*(matrix+i)+j) = a+1+j;
    }
   
    }
for(int i = 0; i < 10; i++) {
for(int k = 0; k < 10; k++) {
cout.width(4);
cout << matrix[i][k];
}
cout << endl;
}
return 0;

}
