#include<iostream>

using std::cout,std::cin,std::endl;

int pow(){
    int x, y;
    cout<<"Input a number to raised and the power : ";
    cin>>x>>y;
    int n = x;
    y--;
    while(y--){
        x *= n;
    }
    return x;
}

void even_odd(){
    int num;
    cout<<"Input a number : ";
    cin>>num;
    if(num&1){
        cout<<num<<" is odd.\n";
        return;
    }
    cout<<num<<" is even.\n";
}


int main(){
    cout<<pow()<<endl;
    even_odd();
    return 0;
}
