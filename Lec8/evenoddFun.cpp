#include<iostream>

using std::cout,std::cin,std::endl;

bool isEven(int num){
    return !(num&10);
}

int main(){
    int num;
    cout<<"Input a number : ";
    cin>>num;
    if(isEven(num))
        cout<<"The number is even.\n";
    else
        cout<<"The number is odd.\n";
    return 0;
}
