#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
  //Increment unary operator
  int i =10,a = 0;
  cout<<" a = "<<a<<", i = "<<i<<endl;
  cout<<"After post increment : a = "<<(a + (i++))<<" and i = "<<i<<endl;
  a = 0;
  i = 10;
  cout<<"After pre increment : a = "<<(a+(++i))<<" and i = "<<i<<endl;
  cout<<"Using a while loop :\ni.post increment\n";
  i = -10;
  while(i++){
    cout<<i<<" "; 
  }
  cout<<"\nii.pre increment\n";
  i = -10;
  while(++i){
    cout<<i<<" ";    
  }
  a = 0;
  i = 10;
  cout<<"\nAfter post decriment : a = "<<(a+(i--))<<" and i = "<<i<<endl;
  a = 0;
  i = 10;
  cout<<"After pre decriment : a = "<<(a+(--i))<<" and i = "<<i<<endl;
  cout<<"Using a while loop :\ni.post decriment\n";
  i = 10;
  while(i--){
    cout<<i<<" "; 
  }
  cout<<"\nii.pre decriment\n";
  i = 10;
  while(--i){
    cout<<i<<" ";    
  }
  cout<<endl;
  return 0;
}
