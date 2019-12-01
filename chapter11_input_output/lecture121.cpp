/* */

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

  int x;

  
  
  cin.setf(ios::dec, ios::basefield);//to recieve decimal number
  cout << "Enter decimal number"<<endl;
  cin>>x;// right shift - extraction operator
  cout<<"Number is:\t"<<x<<endl;//outputs decimal number

  
  cin.setf(ios::hex, ios::basefield);//to recieve hex number
  cout << "Enter hex number"<<endl;
  cin >> x;// right shift - extraction operator
  cout<<"Number is:\t"<<x<<endl;//ouputs decimal 


  cin.setf(ios::oct, ios::basefield);//to receive hex number
  cout << "Enter octal number"<<endl;
  cin >>x; // right shift - extraction operator
  cout<<"Number is:\t"<<x<<endl;//ouputs decimal

  char ch1,ch2;
  cout<<"Enter 2 characters separated by multiple spaces."<<endl;
  cin>>ch1>>ch2;//spaces are ignored!!!  
  cout << "You entered:\t"<<ch1<<","<<ch2<<endl;

  /*
  cout<<"Enter 2 characters separated by multiple spaces."<<endl;
  cin.get(ch1).get(ch2);//consideres white space! get member function cascade (returns reference of the invoking instance)  
  cout << "You entered:\t"<<ch1<<","<<ch2<<endl;
  */
  char string[10];
  cout<<"Enter course name."<< endl;
  cin>>string;
  cout<<string<<endl;

  const int size=10;
  char name[size];

  cout<<"Enter name no more than "<< size-1<<" characters"<<endl;
  cin.width(size);//specify the width to enter through the keyboard!! only 9 charaters will be extracted
  cin>>name;
  cout<<name<<endl;


  cout<<"Enter name no more than "<< size-1<<" characters"<<endl;  
  cin.getline(name,size);//considers multistring (separated by space)
  cout<<name<<endl;



  return 0;
}
