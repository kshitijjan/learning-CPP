#include<iostream>
using namespace std;

int oddEven(int num){
    if(num%2 == 0){
        cout<<"The number is even"<<endl;
    }
    else{
        cout<<"The number is odd"<<endl;
    }
    return num;
}

int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    oddEven(num);

    return 0;
}
