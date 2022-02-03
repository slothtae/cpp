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
  int result = reverse(n);
  if(result)
    cout<<"Reversed number : "<<result<<endl;
  else
    cout<<"The reversed number not in range of 32 bit\n";
  return 0;
}
