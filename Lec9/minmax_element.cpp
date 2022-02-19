#include<iostream>
#include<climits>

using std::cout,std::cin,std::endl;

int get_arrary_max(int arr[],int size){
    int maxi = INT_MIN;
    for(int i=0;i<size;i++)
        maxi = std::max( maxi,arr[i]);//max = (arr[i]>=max)?arr[i]:max;
    return maxi;
}
int get_arrary_min(int arr[],int size){
    int mini = INT_MAX;
    for(int i=0;i<size;i++)
        mini = std::min( mini,arr[i]);//min = (arr[i]=<min)?arr[i]:min;
    return mini;
}
int main(){
    int size,num[100];
    cin>>size;
    for(int i=0;i<size;i++)
        cin>>num[i];
    cout<<"max : "<<get_arrary_max(num,size)<<endl;
    cout<<"min :"<<get_arrary_min(num,size)<<endl;
    return 0;
}
