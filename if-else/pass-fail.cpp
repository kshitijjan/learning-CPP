#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    if(num>80){
        cout<<"A Grade"<<endl;
    }
    else if(num>65 && num<=80){
        cout<<"B Grade"<<endl;
    }
    else if(num>=40 && num<=65){
        cout<<"C Grade"<<endl;
    }
    else if(num<40){
        cout<<"Fail"<<endl;
    }

    return 0;
}
