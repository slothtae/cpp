#include<iostream>

using std::cout,std::cin,std::endl;

int sum_of_array(int arr[],int size){
    int sum = 0,i=0;
    while(i<size){
        sum += arr[i];
        i++;
    }
    return sum;
}

int main(){
    int size,num[100];
    cin>>size;
    for(int i=0;i<size;i++)
        cin>>num[i];
    cout<<"the sum of array : "<<sum_of_array(num,size)<<endl;
    return 0;
}
