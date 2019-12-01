#include<stdio.h>//file inclusion

int number=0;//integer number with global scope

class integer{//class name 

private://access modifier, only inside class
  int number;// data member

public://access modifier, not only inside class  
  void store(int);//member function declaration//mutator
  int getnum(void);//member function declaration//accesor
};

void integer::store(int x){//function definition using scopre resolution operator
  number=x;
  
  //int number=10;//if initilaze with function scope use:
  //integer::number=x;//use scopre resolution to tell explicitely that you refer to the class not the function scope

  //to refer global variable use unary scope resolution operator
  //::number=x;
  

}

int integer::getnum(void){//accesor function
  return number;
}



int main(){
  
  integer in; //instansiate. Create an instance(object) of the class. That is, allocates memory.Class is only the blueprint
  //class integer in;//can also be writte.But, class name automatically becomes type name, so no need to write 'class' in front

  in.store(5); //use function mutator, that is store, to store 5

  printf("The class number: %d\n", in.getnum() );//use accesor function, that is getnum, to return number stored.

  printf("The global number: %d\n", number );

  return 0;
}
