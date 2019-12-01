/*integer formating*/

#include<iostream>
#include<iomanip>

using namespace std;
/*
static const long basefield;//declaration of basefield variable
const long basefield= ios::dec | ios::oct | ios::hex;//definition of basefield variable
*/


int main(){

  int x=65890;

  cout.setf(ios::showbase);//shows base(example 0x for hex)
  cout.setf(ios::dec, ios::basefield);//second argument is basefield defined in ios. Used for masking
  cout<<"As decimal: "<<x<<endl;//left shift operator is called insertion operator

  cout.setf(ios::oct, ios::basefield);
  cout<<"As octal: "<<x<<endl;

  cout.setf(ios::hex, ios::basefield);
  cout<<"As hex: "<<x<<endl;


  cout.unsetf(ios::hex);
    
  cout.width(20);//width applies for the first cout call. The second that refers to "is the results" is not considered
  cout<<x<<" Is the result"<<endl;

  cout.width(20);//cout.width() again for each new line
  cout.fill('.');//fills character of your choise instead of just space
  cout<<x<<" Is the result"<<endl;

  return 0;
}
