#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int reverse(int x) {
  int y = 0;
  while(x){
    if(y >=  214748365 || y <= - 214748365 ){
      y = 0;
      break;
    }
    y = y*10 + x%10;
    x /= 10;
  }
  return y;
}

int main(){
  int n;
  cout<<"Input a number : ";
  cin>>n;
  cout<<"Reversed number : "<<reverse(n)<<endl;
  return 0;
}
