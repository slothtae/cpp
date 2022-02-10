#include<iostream>
#include<math.h>
using std::cin;
using std::cout;
using std::endl;

int main(){
  int n,d,answer = 0,i=0,array[32],N=31;
  for(int i = 0;i<32;i++){
    array[i] = 0;
  }
  cout<<"Input a integer : ";
  cin>>n;
  while(n){
    d = (n&1)?1:0;
    array[N] = d;
    N--;
    n = n>>1;
    i++;
  }
  N =32;
  while(N--){
    array[N] = (array[N]&1)?0:1;
  }
  int add = 1;
  N = 32; 
  while(add){
    if(array[N]==0){
      array[N] = 1;
      break;
    }   
    else{
      array[N] = 0;
    }   
    N--;
  }
  for(auto i:array){
    cout<<i;
  }
  cout<<endl;
  return 0;
}

