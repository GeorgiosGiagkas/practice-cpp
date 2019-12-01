/* Shallow copy */

#include<stdio.h>
#include<string.h>

class student{
private://data member with private access modifier
  int roll_no;
  float percentage;
  char *name;//character pointer
public:
  inline student(int=0, float=0.0, const char* =" ");//3rd argument: constant character pointer. Default and parameterized constructor
  inline ~student();//destructor
  inline int getR(void) const;
  inline float getP(void) const;
  inline const char* getName(void) const;//inline accessor funcion. returns constant character pointer(cannot change the variable content that the pointer is targeting)
};

inline student::student(int x, float y, const char* nm){//parameterized constructor definition
  puts("Constructor");
  roll_no= x;
  percentage=y;
  name= new char[strlen(nm)+1];//allocate memory on the heap for character array (length of nm) +1 for '0\' operator
  strcpy(name,nm);//copy contents of nm to name;
}

inline student::~student(){//destructor
  delete [] name;//free allocated memory for character array!!!
  puts("Destructor");
}

inline int student::getR(void) const{
  return roll_no;
}

inline float student::getP(void) const{
  return percentage;
}

inline const char* student::getName(void) const{
  return name;
}



int main(){
  student st1(10,20.2,"Ryu");
  printf("%d, %0.2f, %s\n",st1.getR(), st1.getP(), st1.getName() );

  student st2(st1);//swallon copy, member-wise initialization (default copy constructor is provided. Why is it running???i hsould't. Maybe default copy construcor creates deep copy???)
  printf("%d, %0.2f, %s\n",st2.getR(), st2.getP(), st2.getName() );
  
  return 0;
}
