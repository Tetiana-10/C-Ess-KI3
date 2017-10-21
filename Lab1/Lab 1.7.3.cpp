#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string addr = "";
    string  input = "";
    for(int i=0;i<4;i++)
    {
        while(true){
      cout << "Input a number (from 1 to 255)";
      getline(cin, input);
      if(std::stoi(input)>=1 && std::stoi(input)<255){ break;}
      cout<<"The number is incorrect : "+input<<endl;
        }
       addr = addr+input+".";
    }
    cout << addr;
}
