#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
  int n,i=2;
  bool isPrime = true;
  cout<<"Input a integer : ";
  cin>>n;
  while(i < n){
    if( n%i == 0 ){
      isPrime = false;
      break;
    }
   i++;
  }
  isPrime =(n <= 1)?false:isPrime;
  if(isPrime)
    cout<<"The number is prime \n";
  else
    cout<<"The number is not prime \n";

  return 0;
}
