#include<iostream>

using std::cout,std::cin,std::endl;

int factorial(int n){
    int fact = 1;
    while(n!=0){
        fact *= n--;
    }
    return fact;
}

int nCr(int n,int r){
    return (n>=r)?factorial(n)/(factorial(r)*factorial(n-r)):-1;
}

int main(){
    int n,r;
    cout<<"Input n and r : ";
    cin>>n>>r;
    cout<<endl<<n<<"C"<<r<<" : "<<nCr(n,r)<<endl;
    return 0;
}
