#include <iostream>

using std::cout,std::cin,std::endl;

int main(){
  int a = 10,b =1;
  switch(a){
    case 1: cout<<"One\n";
            break;
    case 2: cout<<"two\n";
            break;
    default: switch(b){
              case 1: cout<<"Done\n";
                      break;
            }

  }
  return 0;
}
