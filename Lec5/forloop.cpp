#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
  int n;
  cout<<"Input a integer : ";  
  cin>>n;
  for(int i = 1;i <= n;i++){
    cout<<i<<" ";
  }
  cout<<endl;
  for(int a=1,b=2;a<=n;a++){
    cout<<(a*b)<<" ";
  }
  cout<<endl;
  return 0;
}
