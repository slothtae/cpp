#include<iostream>

using std::cout,std::cin,std::endl;

bool lsearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[10]{1,5,-24,24,33,24,13,3,9,44};
    cout<<"Input key : ";
    int key;
    cin>>key;
    if(lsearch(arr,10,key))
        cout<<"Key is present in the array.\n";
    else
        cout<<"Key is not in the array.\n"; 

    return 0;
}
