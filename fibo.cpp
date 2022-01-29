#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
  int n,i=0;
  cin>>n;
  int a[n];
  a[0] = 0;
  a[1] = 1;
  while(i < n){
    cout<<a[i]<<" ";
    if(i != 0){
     a[i+1] = a[i] + a[i-1];
    }
    i++;
  }
  cout<<endl;
  return 0;
}
