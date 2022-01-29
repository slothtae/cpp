#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int a = 10;

int main(){
  cout<<a<<endl;
  int a = 3;
  cout<<a<<endl;
  int i = 0;
  for(;i<3;i++){
    cout<<i<<" ";
  }
  cout<<endl;
  int b = 11;
  if(true){
    cout<<a<<endl<<b<<endl;
    int a = 2;
    if(1){
      cout<<a<<endl<<b<<endl;
      int a =14;
      int b = 145;
      cout<<a<<endl<<b<<endl;
    }
  }
  return 0;
}
