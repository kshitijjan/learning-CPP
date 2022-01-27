#include<iostream>
using namespace std;

int primeno(int num){
    bool isPrime = false;
    for(int i=2; i<num; i++){
        if(num%i == 0){
            isPrime = true;
        }
    }
    if(isPrime == true){
        cout<<"Not a Prime number"<<endl;
    }
    else{
        cout<<"Prime Number"<<endl;
    }
    return isPrime;
}

int main(){
    
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    primeno(num);

    return 0;
}
