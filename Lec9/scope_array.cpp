#include<iostream>

using std::cout,std::cin,std::endl;

void update(int arr[],int n){

    arr[0] =10;
    cout<<"Inside update function\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"exiting update function\n\n";

}

int main(){
    int a[3]{1,2,3};
    update(a,3);
    //the value of array gets updated in the function
    cout<<"Inside main function\n";
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
