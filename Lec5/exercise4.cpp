#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int bitwiseComplement(int n) {
  if(n == 0){
    return 1;
  }
  int result = 0,a[32],count=0;
  for(int i = 0;n > 0;i++){
    a[i] = (n%2 && 1)?0:1;
    n /= 2;
    count++;
  }
  int i =0;
  while(i<count){
    result += a[i]*pow(2,i);
    i++;
  }
  cout<<result<<endl;
  return result;
}

int main(){
  int n;
  cout<<"Input a number : ";
  cin>>n;
  cout<<"The complement of the number : "<<bitwiseComplement(n)<<endl;
  return 0;
}
