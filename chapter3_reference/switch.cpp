/*C++ program to switch the contents between two variable using references.*/

#include<stdio.h>

//prototype
void interchange(int&,int&);
void interchangeConst(const int&, const int&);

int main(){

  int x=10;
  int y=20;
  
  printf("Before change: x = %d, y = %d.\n",x,y);

  //function call
  interchange(x,y);
  printf("After change: x = %d, y = %d.\n",x,y);

  //proper systax for reference
  float z = 3.0;//initialize float variable
  float& ref_z = z;//create reference of z, called ref_z
  printf("Value of z: %0.2f\tAddress: %p\n",z,&z );
  printf("Value of ref_z: %0.2f\tAddress: %p\n",ref_z, &ref_z);

  //constant reference with non-constant variable  
  printf("Before change: x = %d, y = %d.\n",x,y);
  interchangeConst(x,y);
  printf("After interchangeConst call: x = %d, y = %d.\n",x,y);

  //Also, constant variable with a non-constant reference is invalid in C++
  
  return 0;
}


void interchange(int& numA, int& numB){//function definition using references ex. int& numA=x; So numA is reference to x.
  int temp;
  temp=numA;
  numA=numB;
  numB=temp;
}

void interchangeConst(const int& numA,const int& numB){//function definition using constant references
  printf("Constant variables cannot change!\n");
}
