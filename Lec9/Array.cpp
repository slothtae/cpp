#include<iostream>

using std::cout,std::cin,std::endl;

void print_array(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void print_array_ch(char arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int dost[10];
    for(int i=0;i<10;i++){
        dost[i] = 22;
    }
    print_array(dost,10);
    cout<<dost[6]<<endl;
    int two[10] = {3,2};
    cout<<"size of array : "<<sizeof(two)/sizeof(int)<<endl;
    char ch[10]{'a','b'};
    print_array_ch(ch,10);
    return 0;
}
