#include<iostream>

using std::cout,std::cin,std::endl;

int main(){
    int num;
    cout<<"Input a number greater than 0 : ";
    cin>>num;
    switch(num&1){
        case 1: cout<<"odd\n";
                break;
        default: cout<<"even\n";
    }
    return 0;
}
