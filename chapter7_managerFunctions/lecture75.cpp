/*Deep cpy*/

#include<stdio.h>
#include<string.h>

class student{

private:
  int roll_no;
  float percentage;
  char *name;
public:
  inline student(int=0, float=0.0, const char* =" ");//parameterized constructor with default values
  inline student(const student&);//copy constructor with constant reference of instance of class student
  inline ~student();//destructor
  inline int getR(void) const;//accessor function
  inline float getP(void) const;
  inline const char* getName(void) const;
};


inline student::student(int x, float y, const char* nm){
  roll_no=x;
  percentage=y;
  name= new char[strlen(nm)+1];//allocate memory from the heap for character array with lengh of nm
  strcpy(name, nm);//copy contents of nm to name;
  puts("Constructor");
}

inline student::student(const student& s){//copy constructor
  roll_no=s.roll_no;
  percentage=s.percentage;
  name= new char[strlen(s.name)+1];
  strcpy(name,s.name);
  puts("Copy constructor");
}

inline student::~student(){//destructor
  puts("Destructor");
  delete [] name;//free memory for character array
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

  student st1(1,19.2, "Ryu");
  student st2(st1);

  printf("%d, %0.2f, %s\n",st1.getR(), st1.getP(), st1.getName() );
  printf("%d, %0.2f, %s\n",st2.getR(), st2.getP(), st2.getName() );

  return 0;
}
