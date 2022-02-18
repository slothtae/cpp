#include<iostream>

using std::cout,std::cin,std::endl;

int setBits(int a, int b){
    int count = 0;
    while(a || b){
        if(a&1)
            count++;
        if(b&1)
            count++;
        a>>=1;
        b>>=1;
    }
    return count;
}

int main(){
    int a,b;
    cout<<"Input a and b : ";
    cin>>a>>b;
    cout<<"Number of set bits: "<<setBits(a,b)<<endl;
    return 0;
}
