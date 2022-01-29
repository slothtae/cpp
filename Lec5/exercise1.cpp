#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int subtractProductAndSum(int n) {
  int sum = 0, product=1;
  while(n>0){
    sum += n%10;
    product *= n%10;
    n /= 10;
  }
  return (product - sum);      
}

int main(){
  int n;
  cout<<"Input a number : ";
  cin>>n;
  cout<<subtractProductAndSum(n)<<endl;
  return 0;
}
