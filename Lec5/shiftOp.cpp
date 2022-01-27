#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
  /*
   Left shift
   example :
    5 (0000....0101) << 1 => 0000....1010
    3 << 2:
    0000....0011 << 2 : 0000....1100

    if we do this with a big number we might get a negative integer.But for
    small numbers the multiplication by 2 works
  */
  /*
    Right Shift
    example :
    5 >> 1:
    0000....0101 >> 1 : 0000....0010
    5 >> 2:
    0000....0101 >> 2 : 0000....0001

    if we left or right shift of +ve integerwe do padding with 0,
    in case of -ve integer it's dependent on compiler.
  */
  int a,b;
  cout<<"input the number to be shifted and the number of shifts: ";
  cin>>a>>b;
  cout<<a<<"<<"<<b<<" : "<<(a<<b)<<endl;
  cout<<a<<">>"<<b<<" : "<<(a>>b)<<endl;
  return 0;
}
