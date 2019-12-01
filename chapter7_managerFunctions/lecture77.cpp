/*Sequence-of-member-initialization*/


#include<stdio.h>

class employee{
private:
  const long emp_id;//constant long (Constant variables must be initialized in C++)
  const long& id;//constant long reference (Reference variables must be initialized in C++)
public:
  inline employee(long = 0L);//contructor 
  inline ~employee();//destructor
  inline long get(void) const;//accessor
};

inline employee::employee(long x):emp_id(x),id(emp_id){//paremetarize costructor with true initialization of data members (required  for consant data members and reference variables)
  puts("Constructor");
}

inline employee::~employee(){
  puts("Destructor");
}

inline long employee::get(void) const{
  return emp_id;
}

int main(){

  employee emp(100);

  printf("Emploee ID: %ld\n", emp.get()  );
  return 0;
}
