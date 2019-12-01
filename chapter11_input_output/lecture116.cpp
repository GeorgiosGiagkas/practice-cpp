/*intenals of ostream library. Cast void* to get access to the address of a string */


#include<iostream>
using namespace std;

int main(){

  char string[]="Hello world!";

  //const char* string = "Hello world";// i can use this but cannot cast to void* letter to find the address (??)
  
  cout<<"Value of the string is: "<< string<< endl;

  cout<<"Addreass of variable is: "<< static_cast<void*>(string)<<endl;//cast to void pointer with static_cast<void*>()

  cout.put('a').put('\n');//Chain function. put is used for print in character form ' '
  return 0;
}
