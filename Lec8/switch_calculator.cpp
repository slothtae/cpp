#include <iostream>

using std::cout,std::cin,std::endl;

int main(){
  int a,b,diff;
  char opp;
  cout<<"Input two operand a and b : ";
  cin>>a>>b;
  cout<<"Input operation as follows:\n1. +\n2. -\n3. *\n4. /\n5. %\n\n";
  cin>>opp;
  cout<<endl;
  switch(opp){
    case '+': cout<<"Sum : "<<(a+b)<<endl;
            break;
    case '-': diff = (a<b)?(b-a):(a-b);
            cout<<"Difference : "<<diff<<endl;
            break;
    case '*': cout<<"Product : "<<(a*b)<<endl;
            break;
    case '/': cout<<a<<"/"<<b<<" : "<<(a/b)<<endl;
            break;
    case '%': cout<<a<<"%"<<b<<" : "<<(a%b)<<endl;
            break;
    default: cout<<"Invalid Selection.\n";

  }
  return 0;
}
