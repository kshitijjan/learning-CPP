#include<iostream>
using namespace std;

void details(string name, int age){
    cout<<"Hello "<<name<<endl<<"Your age is "<<age<<endl;
}

int main(){

    details("Kshitij", 19);
    details("John", 23);

    return 0;
}
