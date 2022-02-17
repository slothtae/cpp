#include<iostream>

using std::cout,std::cin,std::endl;

bool isPrime(int n){
    int i=2;
    while(i < n){
        if(n%i == 0)
            return false;
        i++;
    }
    return (n>1)?true:false;
}

int main(){
    int n;
    cout<<"Input a number : ";
    cin>>n;
    if(isPrime(n))
        cout<<"The number is prime.\n";
    else
        cout<<"The numeber is not prime.\n";
    return 0;
}
