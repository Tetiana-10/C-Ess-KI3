#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int first,second;
string display(){
    cout<<"Input first = ";
    cin>>first;
    cout<<"Input second = ";
    cin>>second;
}
    
int main()
{
    bool if_exit = false;
    int option = 0;
    while(!if_exit){
        cout<<"Chose Option: "<<endl;
        cin>>option;
    switch(option){
    case 0:{
        if_exit = true;
        break;
        }
    case 1:{
        display();
        cout<<to_string(first+second);
        break;
        }
    case 2: {
        display();
        cout<<to_string(first-second);
        break;
        }
    case 3: {
        display();
        cout<<to_string(first*second);
        break;
        }
    case 4: {
        display();
        if(second == 0){break;}
        else{
            cout<<to_string(first/second)<<endl;
            break;
            }
        
        }  
    }
}

}


