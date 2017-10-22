#include <iostream>
#include <string>
#include <sstream>

using namespace std;  
int main()
{
    int sum;
cout<<"Input sum";
cin>>sum;
while(sum - 50>=20 || sum==50){
    sum-=50;
    cout<<50;
    cout<<"  ";
    }
while(sum - 20>=10 || sum==20){
    sum-=20;
    cout<<20;
    cout<<"   ";
    }
while(sum - 10>=5 || sum==10){
    sum-=10;
    cout<<10;
    cout<<"   ";
    }
while(sum - 5>=1 || sum==5){
    sum-=5;
    cout<<5;
    cout<<"   ";
    }
while(sum - 1>=0 || sum==1){
    sum-=1;
    cout<<1;
    cout<<"   ";
    }    
}
