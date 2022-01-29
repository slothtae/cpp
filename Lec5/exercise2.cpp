#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int hammingWeight(uint32_t n) {
  int count = 0;
  while(n != 0){
    if (n&1){
      count++;
    }
    n = n >> 1;
  }
  return count;
}
int main(){
  int n;
  cout<<"Input a binary number : ";
  cin>>n;
  cout<<hammingWeight(n)<<endl;
  return 0;
}
