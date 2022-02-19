#include<iostream>

using std::cout,std::cin,std::endl;

bool isPow2(int num){
    return !( num & (num-1));
}

int main(){
    int num;
    cout<<"input a number : ";
    cin>>num;
    if(isPow2(num))
        cout<<"The number is power of two.\n";
    else
        cout<<"The number is not a power of two.\n";
    return 0;
}
