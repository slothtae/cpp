#include<iostream>
#include<math.h>

using std::cout;
using std::cin;
using std::endl;

int main(){
  int n,answer = 0,t=1,i=0;
  cout<<"Input a binary number : ";
  cin>>n;
  while(n){
   answer += (n&1) * t;
   i++;
   t<<=1;
   n /=10;
  }
  cout<<"Answer : "<<answer<<endl;
  return 0;
}
