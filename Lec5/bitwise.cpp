#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
  
  // bitwise :
  // & => and
  /*
    And table:
     a  b | a & b
    --------------
     0  0 |   0
     0  1 |   0
     1  0 |   0
     1  1 |   1

    Example of & operation
    a = 3 => 1 1
    b = 1 => 0 1
    a & b => 0 1 = 1 using And table
  */

  // | => or
  /*
    Or table:
     a  b  a | b
    -------------
     0  0    0
     0  1    1
     1  0    1
     1  1    1

     example of | opreation
     a = 4 => 1 0 0
     b = 6 => 1 1 0
     a | b => 1 1 0 => 6 using Or table  
  */
  // ~ => not
  /*
     Not table:
     x  |  y
    ---------
     0  |  1
     1  |  0

   example of not operation:
    a = 2 => 0000.....0010
    ~a = -3 => 1111...1101 (using 2's compliment)

  */
  // ^ => xor
  /*
    Xor table:
    x  y | z
   ----------
    0  0 | 0
    0  1 | 1
    1  0 | 1
    1  1 | 0

    example:
     a = 5 => 1 0 1
     b = 2 => 0 1 0
     a ^ b => 1 1 1 => 7
  */
  int a  = 2, b = 6;

  cout<<a<<" and "<<b<<" : "<<(a&b)<<endl;
  cout<<a<<" or "<<b<<" : "<<(a|b)<<endl;
  cout<<"not "<<b<<" : "<<~b<<endl;
  cout<<a<<" xor "<<b<<" : "<<(a^b)<<endl;
  return 0;
}
