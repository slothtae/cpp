// a very silly solution
#include<iostream>

using std::cout,std::cin,std::endl;

int main(){
    int num,hundred=0,fifty=0,twenty=0,one=0;
    cout<<"Input an amount : ";
    cin>>num;
    int a = (num>=1)?1:0;
    switch(a){
        case 0: break;
        case 1: hundred = num/100;
                num %= 100;
        case 2: fifty = num/50;
                num %= 50;
        case 3: twenty = num/20;
                num %= 20;
        case 4: one = num/1;
    }
    cout<<"\nOutput :\n\n";
    cout<<"100s : "<<hundred<<"\n50s :  "<<fifty<<"\n20s :  "<<twenty<<"\n1s :   "<<one<<endl;

    return 0;
}
