/* Set width and float formating*/


#include<iostream>
#include<iomanip>
using namespace std;

/*
static const long adjustfield;//declaration variable
const long adjustfield = ios::left | ios::right | ios::internal;//definition
*/

/*
static const long floatfield;
const long floatfield=ios::fixed | ios::scientific;
*/

int main(){

  int x=65;

  cout.fill('*');
  cout.setf(ios::showpos);

  cout.setf(ios::left, ios::adjustfield);
  cout.width(15);
  cout<<x<<endl;

  cout.setf(ios::right, ios::adjustfield);
  cout.width(15);
  cout<<x<<endl;

  cout.setf(ios::internal, ios::adjustfield);//pad after sign or base indicator
  cout.width(15);
  cout<<x<<endl;




  cout<< 1.23456789 <<endl;
  cout<< 4.0 <<endl;
  cout<< 5.678E2 <<endl;
  cout<<0.0<<endl;


  cout.setf(ios::showpoint);//shows decimal
  cout.precision(3);//3 digits
    
  cout<< 1.23456789 <<endl;
  cout<< 4.0 <<endl;
  cout<< 5.678E2 <<endl;
  cout<<0.0<<endl;
  /*

   */


  cout.setf(ios::showpoint);
  cout.precision(3);//3 digits but fixed and scientific refers to float digits
  
  cout <<" -------------------------------------------------------"<<endl;
  cout<<"Scientific..."<<endl;
  cout.setf(ios::scientific, ios::floatfield);
  cout<< 1.23456789 <<endl;
  cout<< 4.0 <<endl;
  cout<< 5.678E2 <<endl;
  cout<<0.0<<endl;

  
  cout <<" -------------------------------------------------------"<<endl;  
  cout<<"Fixed..."<<endl;
  cout.setf(ios::fixed, ios::floatfield);
  cout<< 1.23456789 <<endl;
  cout<< 4.0 <<endl;
  cout<< 5.678E2 <<endl;
  cout<<0.0<<endl;

  return 0;
}
