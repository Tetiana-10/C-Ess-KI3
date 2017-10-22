#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
   float  grossprice, taxrate, netprice, taxvalue;
   while(true){
       cout << "Enter a gross price: ";
cin >> grossprice;
if(grossprice >0) {break;}
cout << "A gross price should be bigger than 0 ";
       }
       while(true){
           cout << "Enter a tax rate: ";
cin >> taxrate;
if(taxrate>0 && taxrate<100){break;}
cout << "A taxrate should be bigger than 0 and less than 100 ";
           }
netprice = grossprice/(taxrate/100+1);
taxvalue = (netprice*taxrate)/100;
cout << "Net price: " << netprice << endl;
cout << "Tax value: " << taxvalue << endl;
return 0;
}
