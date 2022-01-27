#include<iostream>
using namespace std;

int sum(int a, int b){
    int sum = a+b;
    cout<<sum<<endl;
    
    return sum;
}

int main(){
    int a,b;
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;

    sum(a,b);

    return 0;
}
