#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int powr(int a,int b){
  if(b == 0){ 
    return 1;
  }
  int n = a;
  while(b>1){
    a *= n;
    b--;
  }
  return a;
}

int main(){
  int n,d,answer = 0,i=0;
  cout<<"Input a integer : ";
  cin>>n;
  while(n){
    d = (n&1)?1:0;
    answer = (powr(10,i)*d) + answer;
    n = n>>1;
    i++;
  }
  cout<<"Answer : "<<answer<<endl;
  return 0;
}
