#include<iostream>
using namespace std;
int main(){

  string name="My name is Kshitij Jain";

  cout<<name.length()<<endl;   //Gives length of string
  
  cout<<name[11]<<endl;       //Access specific character inside string
  
  name[17] = 'z';             // Changing particular character inside string
  cout<<name<<endl;              
  
  cout<<name.find("iti", 0)<<endl;    //Finding a substring

  cout<<name.substr(11,22)<<endl     //Accessing Substring using index numbers


  return 0;
}
