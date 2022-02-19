#include<iostream>

using std::cout,std::cin,std::endl;

void swap(int &a,int &b){
    a = a+b;
    b = a-b;
    a = a-b;
}

void print_array(int arr[],int size){
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void reverse_array(int arr[],int size){
    for(int i=0;i<size/2;i++){
        swap(arr[i],arr[size-1-i]);//Another method :start increases and end decreases if they are equal or start>end stop
    }
}

int main(){
    int size,arr[100];
    cout<<"input size : ";
    cin>>size;
    cout<<"Input array elements : ";
    for(int i = 0;i<size;i++)
        cin>>arr[i];
    cout<<"Array:\n";
    print_array(arr,size);
    reverse_array(arr,size);
    cout<<"Array after reversal :\n";
    print_array(arr,size);
    return 0;
}
