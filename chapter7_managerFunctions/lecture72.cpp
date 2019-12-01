/* Constructor taking two arguments. */

#include<stdio.h>


class student{//class name
private:
  int roll_no;
  double percentage;
public:
  inline student();//default constructor
  inline student(int, double);//constructor
  inline ~student();//destructor
  inline int getR(void) const;//accessor funtion
  inline double getP(void) const;//accessor function
};

inline student::student(){
  roll_no=0;
  percentage=0.0;
  puts("Default constructor");
}

inline student::student(int x, double y){
  puts("Constructor");
  roll_no=x;
  percentage=y;
}

inline student::~student(){
  puts("Destructor");
}

inline int student::getR(void) const{
  return roll_no;
}

inline double student::getP(void) const{
  return percentage;
}



int main(){
  student st1;//instantiate class student with default constructor
  printf("Result %d, %0.2lf\n",st1.getR(), st1.getP() );

  student st2(100,98.4);//instantiate class student with default constructor
  printf("Result %d, %0.2lf\n",st2.getR(), st2.getP() );

  return 0;
}
