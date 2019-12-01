/* Set flag */

#include<iostream>
#include<iomanip>//for stream input output

using namespace std;

int main(){

  int x = 5;
  float y = 3.14f;

  cout.setf(ios::showpos);//setf to set format flag. Takes one or two arguments. use scope resolution operator to access ios to specify format

  cout<<"x="<<x<<endl;
  cout<<"y="<<x<<endl;

  cout.unsetf(ios::showpos);//unset format flag 
  
  cout<<"x="<<x<<endl;
  cout<<"y="<<x<<endl;


  char string[]="Number";
  cout.setf(ios::showpos | ios::uppercase);//Use | (bitwise OR) for more flags
  
  cout<<string<<" "<<x<<endl;
  

  cout.unsetf(ios::showpos | ios::uppercase);
  cout<<string<<" "<<x<<endl;
  

  cout.setf(ios::oct, ios::dec | ios:: oct | ios::hex);//second argument for masking flags(notice that flag of the first argument is also used to be masked in the second argument
  cout<<x<<endl;
  
  return 0;

}
