#include<iostream>
using namespace std;

int main(){

    int salary;
    cout<<"Enter your salary"<<endl;
    cin>>salary;

    if(salary>=100000){
        cout<<"You are not eligible for bonus"<<endl;
    }
    else if(salary>=70000 && salary<100000){
        cout<<"You are eligible for 25,000 INR bonus"<<endl;
    }
    else if(salary>=50000 && salary<70000){
        cout<<"You are eligible for 50,000 INR bonus"<<endl;
    }
    else if(salary>=25000 && salary<50000){
        cout<<"You are eligible for 75,000 INR bonus"<<endl;
    }
    else if(salary<25000){
        cout<<"You are eligible for 1,00,000 INR bonus"<<endl;
    }


    return 0;
}
