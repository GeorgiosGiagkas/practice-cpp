/*Default costructor and destructor */

#include<stdio.h>


class integer{//class name
private://access specifier
  int number;//data member
public:
  inline integer();//default constructor(manager funtion invocked automatically when instance of class is created
  inline ~integer();//destructor
  inline void set(int);//mutator function
  inline int get(void) const;//accessor function
};
//use scope resolultion operator to refer to member functions
inline integer::integer(){
  puts("Constructor");
  number=0;
}

inline integer::~integer(){
  puts("Destructor");
}

inline void integer::set(int x){
  number=x;
}

inline int integer::get(void) const{
  return number;
}



integer in1;//create global instance of class integer

int main(){

  printf("Global output is %d\n", in1.get());

  puts("Creating instancies of integer...");
  integer in2,in3,in4;
  printf("Output %d, %d, %d\n",in2.get(),in3.get(),in4.get());

  puts("Creating array of integers");
  integer array[4];
  for(int i=0;i<5;i++){
    array[i].set(i);//call member mutator function 
    printf("Array Output %d is: %d\n",i,array[i].get() );
  }

  puts("Entering loop");
  int j=0;
  while(j<3){
    puts("In loop");
    integer in5;
    printf("In loop output is %d\n", in5.get());
    j++;
    puts("Out loop");
  }
  puts("Left loop");

  puts("Creating integer pointer");
  integer *ptr=new integer;//create integer pointer
  printf("Output is: %d\n",ptr->get());

  puts("Deleting ptr");
  delete ptr;// destructor is invoked before leaving main!!!! ??????

  puts("Leaving main...");

  return 0;
}
  

  
