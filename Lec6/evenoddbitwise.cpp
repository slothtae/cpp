#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
  int n;
  cout<<"Input a integer : ";
  cin>>n;
  if(n&1)
    cout<<n<<" is an odd.\n";
  else
    cout<<n<<" is an even.\n";
  return 0;
}
