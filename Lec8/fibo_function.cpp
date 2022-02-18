#include<iostream>

using std::cout,std::cin,std::endl;

int fibo(int n){
    int arr[n],i=2;
    arr[0] = 0;
    arr[1] = 1;
    while(i < n){
        arr[i] = arr[i-2] + arr[i-1];
        i++;
    }
    return arr[n-1];
}

int main(){
    int n;
    cout<<"Input n :";
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}
