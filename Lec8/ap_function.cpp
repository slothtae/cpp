#include <iostream>

using std::cout,std::cin,std::endl;

int nthAP(int a,int n,int d){ 
 return a+(n-1)*d;
}

int main(){
  int a,n,d;
  cout<<"Input first element and common difference : ";
  cin>>a>>d;
  cout<<"Input the term to be found : ";
  cin>>n;
  cout<<"The term in the postion "<<n<<" is : "<<nthAP(a,n,d)<<endl;
  return 0;
}
